/**
 * @file qpow.hpp
 * @brief 快速幂（取模 / 不取模）
 * @complexity O(log b)
 * @适用场景 模幂运算、组合数取模
 */
#ifndef QPOW_HPP
#define QPOW_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 模快速幂，计算 a^b mod mod
 * @param a 底数
 * @param b 指数（非负）
 * @param mod 模数
 * @return a^b mod mod，乘法用 __int128 防止溢出
 */
long long qpow(long long a, long long b, long long mod) {
    long long res = 1 % mod;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (long long)((__int128)res * a % mod);
        a = (long long)((__int128)a * a % mod);
        b >>= 1;
    }
    return res;
}

/**
 * @brief 快速幂（不取模），计算 a^b
 * @param a 底数
 * @param b 指数（非负）
 * @return a^b，结果可能溢出 long long，仅用于小数据
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

#endif  // QPOW_HPP
