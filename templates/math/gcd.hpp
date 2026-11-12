/**
 * @file gcd.hpp
 * @brief 最大公约数 / 最小公倍数 / 扩展欧几里得模板
 * @complexity O(log min(a, b))
 * @适用场景 数论基础、模逆元、分数约分、公倍数计算
 */
#ifndef ACM_MATH_GCD_HPP
#define ACM_MATH_GCD_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 求最大公约数（辗转相除法 / 欧几里得算法）
 * @param a 整数
 * @param b 整数
 * @return gcd(a, b)，约定 gcd(0, b) = |b|
 * @note C++17 起可直接用 <numeric> 中的 std::gcd
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
 * @brief 求最小公倍数
 * @param a 整数
 * @param b 整数
 * @return lcm(a, b)；先除后乘，避免中间结果溢出
 * @note 任一参数为 0 时返回 0
 */
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return a / gcd(a, b) * b;
}

/**
 * @brief 扩展欧几里得算法，求 ax + by = gcd(a, b) 的一组整数解
 * @param a 整数
 * @param b 整数
 * @param x 输出参数：系数 x
 * @param y 输出参数：系数 y
 * @return gcd(a, b)
 * @note 常用于求模逆元：b 在模 a 下的逆元即 x（需调整到正数）
 */
long long exgcd(long long a, long long b, long long &x, long long &y) {
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

#endif // ACM_MATH_GCD_HPP
