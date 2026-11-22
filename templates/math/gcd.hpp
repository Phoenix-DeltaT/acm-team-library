/**
 * @file gcd.hpp
 * @brief 最大公约数 / 最小公倍数 / 扩展欧几里得
 * @complexity O(log min(a, b))
 * @适用场景 数论基础、模逆元、分数约分
 */
#ifndef GCD_HPP
#define GCD_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 最大公约数（辗转相除）
 * @param a 整数
 * @param b 整数
 * @return gcd(a, b)，约定 gcd(0, b) = |b|
 */
long long gcd(long long a, long long b) {
    a = llabs(a);
    b = llabs(b);
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

/**
 * @brief 最小公倍数，先除后乘避免中间结果溢出
 * @param a 整数
 * @param b 整数
 * @return lcm(a, b)，任一参数为 0 返回 0
 */
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return a / gcd(a, b) * b;
}

/**
 * @brief 扩展欧几里得，求 ax + by = gcd(a, b) 的一组整数解
 * @param a 整数
 * @param b 整数
 * @param x 输出参数：系数 x
 * @param y 输出参数：系数 y
 * @return gcd(a, b)
 */
long long exgcd(long long a, long long b, long long& x, long long& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long g = exgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

#endif  // GCD_HPP
