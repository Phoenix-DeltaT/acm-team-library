/**
 * @file fastio.hpp
 * @brief 快速输入输出工具模板
 * @适用场景 大数据量读入、cin/cout 加速
 */
#ifndef ACM_UTILS_FASTIO_HPP
#define ACM_UTILS_FASTIO_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 快速读入单个整数（支持负数），基于 getchar
 * @tparam T 整数类型，如 int / long long
 * @return 读入的数值
 * @note 大数据量下比 cin 明显更快；读字符串、字符仍用 cin >> 或 getchar
 */
template <typename T>
inline T read() {
    T x = 0;
    bool neg = false;
    char c = getchar();
    while (c < '0' || c > '9') {
        if (c == '-') neg = true;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar();
    }
    return neg ? -x : x;
}

/**
 * @brief 关闭 cin/cout 与 stdio 的同步流，加速标准输入输出
 * @note 在 main 开头调用一次；加速后不要再混用 scanf/printf 与 cin/cout
 */
inline void fast_cin_out() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

#endif // ACM_UTILS_FASTIO_HPP
