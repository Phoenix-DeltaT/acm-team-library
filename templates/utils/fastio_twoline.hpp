/**
 * @file fastio_twoline.hpp
 * @brief 快速 IO 两行版（cin/cout 加速，main 开头调用）
 * @适用场景 绝大多数题目这两行已足够，无需手写 getchar/putchar
 * @note 加速后不要再混用 scanf/printf 与 cin/cout
 *
 * 等价的两行原始写法（做题时直接贴 main 开头）：
 *     ios::sync_with_stdio(false);
 *     cin.tie(nullptr);
 */
#ifndef FASTIO_TWOLINE_HPP
#define FASTIO_TWOLINE_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 两行版 cin/cout 加速，在 main 开头调用一次
 */
inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

#endif  // FASTIO_TWOLINE_HPP
