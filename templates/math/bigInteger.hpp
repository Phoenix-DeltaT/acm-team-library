/**
 * @file bigInteger.hpp
 * @brief 大整数（高精度）四则运算：加、减、乘、整除带余
 * @complexity 加/减 O(n)，乘 O(nm)，整除带余 O(n^2) 量级（n、m 为位数）
 * @适用场景 超出 long long 范围的非负整数运算，输入输出均为十进制 string
 * @note 输入应为非负整数，减法在被减数小于减数时结果带负号；除数不可为 0
 */
#ifndef BIGINTEGER_HPP
#define BIGINTEGER_HPP

#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 去掉前导零
 * @param s 数字字符串
 * @return 规范化后的字符串，全零或空串返回 "0"
 */
string clr(string s) {
    int i = 0;
    while (i + 1 < (int)s.size() && s[i] == '0') i++;
    return s.substr(i);
}

/**
 * @brief 非负比较
 * @param a 数字字符串
 * @param b 数字字符串
 * @return a < b 返回 true
 */
bool cmp(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

/**
 * @brief 大整数加法
 * @param a 非负大整数 string
 * @param b 非负大整数 string
 * @return 和，正序 string
 */
string add(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string c;
    int t = 0;
    for (int i = 0; i < (int)max(a.size(), b.size()) || t; i++) {
        if (i < (int)a.size()) t += a[i] - '0';
        if (i < (int)b.size()) t += b[i] - '0';
        c += char('0' + t % 10);
        t /= 10;
    }
    reverse(c.begin(), c.end());
    return c;
}

/**
 * @brief 大整数减法
 * @param a 被减数（非负）string
 * @param b 减数（非负）string
 * @return 差，正序 string；a < b 时结果带负号
 */
string sub(string a, string b) {
    bool neg = false;
    if (cmp(a, b)) { swap(a, b); neg = true; }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string c;
    int borrow = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        int t = a[i] - '0' - borrow;
        if (i < (int)b.size()) t -= b[i] - '0';
        if (t < 0) { t += 10; borrow = 1; } else borrow = 0;
        c += char('0' + t);
    }
    reverse(c.begin(), c.end());
    c = clr(c);
    return neg ? "-" + c : c;
}

/**
 * @brief 大整数乘法
 * @param a 非负大整数 string
 * @param b 非负大整数 string
 * @return 积，正序 string
 */
string mul(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    vector<int> c(a.size() + b.size(), 0);
    for (int i = 0; i < (int)a.size(); i++)
        for (int j = 0; j < (int)b.size(); j++)
            c[i + j] += (a[i] - '0') * (b[j] - '0');
    for (int i = 0; i + 1 < (int)c.size(); i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    string s;
    for (int i = (int)c.size() - 1; i >= 0; i--) s += char('0' + c[i]);
    return clr(s);
}

/**
 * @brief 大整数整除带余除法
 * @param a 被除数（非负）string
 * @param b 除数（非负且非 0）string
 * @return pair，first 为商、second 为余数，满足 a = 商*b + 余数，0 <= 余数 < b
 */
pair<string, string> divmod(string a, string b) {
    if (cmp(a, b)) return {"0", a};
    string q, r = "0";
    for (char ch : a) {
        r += ch;
        r = clr(r);
        int k = 0;
        while (!cmp(r, b)) { r = sub(r, b); k++; }
        q += char('0' + k);
    }
    return {clr(q), clr(r)};
}

#endif  // BIGINTEGER_HPP
