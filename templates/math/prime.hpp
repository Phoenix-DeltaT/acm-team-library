/**
 * @file prime.hpp
 * @brief 素数判断与素数筛
 * @适用场景 单个判素数、批量筛素数、素数表预处理
 */
#ifndef PRIME_HPP
#define PRIME_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 试除法判断素数
 * @param n 待判断整数
 * @return n 为素数返回 true，否则 false
 * @complexity O(sqrt(n))
 */
bool is_prime(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

/**
 * @brief 埃氏筛，筛出 [2, n] 内的素数
 * @param n 上界
 * @param is_p 输出参数：is_p[i] 为 true 表示 i 是素数
 * @complexity O(n log log n)
 */
void sieve(int n, vector<bool>& is_p) {
    is_p.assign(n + 1, true);
    is_p[0] = is_p[1] = false;
    for (int i = 2; (long long)i * i <= n; ++i)
        if (is_p[i])
            for (int j = i * i; j <= n; j += i) is_p[j] = false;
}

/**
 * @brief 欧拉线性筛，每个合数只被其最小质因子筛掉一遍
 * @param n 上界
 * @param primes 输出参数：由小到大存入所有素数
 * @param is_p 输出参数：标记数组
 * @complexity O(n)
 */
void euler_sieve(int n, vector<int>& primes, vector<bool>& is_p) {
    primes.clear();
    is_p.assign(n + 1, true);
    is_p[0] = is_p[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (is_p[i]) primes.push_back(i);
        for (int p : primes) {
            if ((long long)i * p > n) break;
            is_p[i * p] = false;
            if (i % p == 0) break;
        }
    }
}

#endif  // PRIME_HPP
