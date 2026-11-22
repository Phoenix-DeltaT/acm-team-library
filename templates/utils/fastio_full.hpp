/**
 * @file fastio_full.hpp
 * @brief 快速 IO 完整版（快读 + 快写）
 * @complexity 读 / 写均为 O(位数)，常数远小于 cin/cout
 * @适用场景 数据量大（百万级）、cin/cout 超时；读字符串可用 read_str
 */
#ifndef FASTIO_FULL_HPP
#define FASTIO_FULL_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 快速读入一个整数（支持负数），基于 getchar
 * @tparam T 整数类型，如 int / long long
 * @return 读入的数值
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
 * @brief 快速写出一个整数（支持负数），基于 putchar
 * @tparam T 整数类型
 * @param x 待输出数值
 * @note 不自动换行，需要换行时再 putchar('\n')
 */
template <typename T>
inline void write(T x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) write(x / 10);
    putchar(char('0' + x % 10));
}

/**
 * @brief 快速读入一个字符串（字符数组），自动跳过空白
 * @param s 目标字符数组，需预留足够空间
 * @return 字符串长度，函数内部补结束符 '\0'
 */
inline int read_str(char* s) {
    char c = getchar();
    while (c == ' ' || c == '\n' || c == '\r') c = getchar();
    int len = 0;
    while (c != ' ' && c != '\n' && c != '\r' && c != EOF) {
        s[len++] = c;
        c = getchar();
    }
    s[len] = '\0';
    return len;
}

#endif  // FASTIO_FULL_HPP
