/**
 * @file bigIntegerAddition.hpp
 * @brief 大整数加法模板（高精度加法）
 * @complexity O(max(|A|, |B|))
 * @适用场景 两个超出整型范围的非负大整数相加，输入为十进制数字字符串
 */
#ifndef ACM_MATH_BIG_INTEGER_ADDITION_HPP
#define ACM_MATH_BIG_INTEGER_ADDITION_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 两个大整数相加
 * @param A 非负大整数字符串，每一位为 '0'~'9'
 * @param B 非负大整数字符串，每一位为 '0'~'9'
 * @return 相加结果，vector<int> 按高位到低位顺序存储（便于逐位输出）
 * @note 内部按 1-based、低位在前存储；仅支持非负整数，不处理符号与前导零
 */
vector<int> bigIntegerAddition(string A, string B) {
    int len = max(A.length(), B.length());
    vector<int> a(len + 10, 0);  // 1-based，低位在前
    vector<int> b(len + 10, 0);
    vector<int> c(len + 10, 0);

    // 字符串逆序存入数组，个位落在下标 1
    for (int i = A.length() - 1; i >= 0; --i) a[A.length() - i] = A[i] - '0';
    for (int i = B.length() - 1; i >= 0; --i) b[B.length() - i] = B[i] - '0';

    // 逐位相加并处理进位
    for (int i = 1; i <= len; ++i) {
        c[i] += a[i] + b[i];
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }

    // 最高位仍有进位，位数加一
    if (c[len + 1]) ++len;

    // 转回高位在前的结果
    vector<int> res;
    for (int i = len; i > 0; --i) res.push_back(c[i]);
    return res;
}

#endif // ACM_MATH_BIG_INTEGER_ADDITION_HPP
