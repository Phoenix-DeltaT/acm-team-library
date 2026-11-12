/**
 * @file qpow.hpp
 * @brief 快速幂模板（取模 / 不取模）
 * @complexity O(log b)
 * @适用场景 模幂运算、矩阵快速幂前置、组合数取模
 */
#ifndef ACM_MATH_QPOW_HPP
#define ACM_MATH_QPOW_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 模快速幂，计算 a^b mod modu
 * @param a 底数
 * @param b 指数（非负）
 * @param modu 模数
 * @return a^b mod modu
 * @note 乘法用 __int128 防止 a*b 溢出 long long
 */
long long qpow(long long a, long long b, long long modu) {
    long long res = 1 % modu;
    a %= modu;
    while (b > 0) {
        if (b & 1) res = (long long)((__int128)res * a % modu);
        a = (long long)((__int128)a * a % modu);
        b >>= 1;
    }
    return res;
}

/**
 * @brief 快速幂（不取模），计算 a^b
 * @param a 底数
 * @param b 指数（非负）
 * @return a^b
 * @note 结果可能溢出 long long，仅用于小数据场景
 */
long long qpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

#endif // ACM_MATH_QPOW_HPP
