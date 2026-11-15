/**
 * @file bigIntegerMultiplication.hpp
 * @brief 大整数乘法模板（高精度竖式乘法）
 * @complexity O(|A|·|B|)
 * @适用场景 两个超出整型范围的非负大整数相乘，输入为十进制数字字符串
 */
#ifndef ACM_MATH_BIG_INTEGER_MULTIPLICATION_HPP
#define ACM_MATH_BIG_INTEGER_MULTIPLICATION_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 两个大整数相乘
 * @param A 非负大整数字符串，每一位为 '0'~'9'
 * @param B 非负大整数字符串，每一位为 '0'~'9'
 * @return 乘积结果，vector<int> 按高位到低位顺序存储（便于逐位输出）
 * @note 内部按 1-based、低位在前存储；仅支持非负整数，不处理符号与前导零
 */
vector<int> bigIntegerMultiplication(string A, string B) {
    int n = A.length(), m = B.length();
    vector<int> a(n + 10, 0);  // 1-based，低位在前
    vector<int> b(m + 10, 0);
    vector<int> c(n + m + 10, 0);

    // 字符串逆序存入数组，个位落在下标 1
    for (int i = n - 1; i >= 0; --i) a[n - i] = A[i] - '0';
    for (int i = m - 1; i >= 0; --i) b[m - i] = B[i] - '0';

    // 竖式相乘：第 i 位与第 j 位的积落在 i+j-1 位
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            c[i + j - 1] += a[i] * b[j];
        }
    }

    // 统一处理进位
    int maxLen = n + m;
    for (int i = 1; i <= maxLen; ++i) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }

    // 去掉高位前导零；结果为 0 时保留一位 0
    while (maxLen > 1 && !c[maxLen]) --maxLen;

    // 转回高位在前的结果
    vector<int> res;
    for (int i = maxLen; i >= 1; --i) res.push_back(c[i]);
    return res;
}

#endif // ACM_MATH_BIG_INTEGER_MULTIPLICATION_HPP
