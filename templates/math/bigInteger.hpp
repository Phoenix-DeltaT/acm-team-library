/**
 * @file bigInteger.hpp
 * @brief 大整数（高精度）四则运算：加、减、乘、整除带余
 * @complexity 加/减 O(n)，乘 O(nm)，整除带余 O(n^2) 量级（n、m 为位数）
 * @适用场景 超出 long long 范围的非负整数运算，输入输出均为十进制 string
 * @note 外部统一正序 string（高位在前），内部转 vector<int>（低位在前）计算；
 *       输入应为非负整数，减法在被减数小于减数时结果带负号；除数不可为 0
 */
#ifndef ACM_MATH_BIG_INTEGER_HPP
#define ACM_MATH_BIG_INTEGER_HPP

#include <bits/stdc++.h>
using namespace std;

namespace big_integer_detail {

/**
 * @brief 去掉前导零；空串或全零返回 "0"
 */
string normalize(string s) {
    size_t p = 0;
    while (p + 1 < s.size() && s[p] == '0') ++p;
    return s.substr(p);
}

/**
 * @brief 正序 string 转低位在前的 vector<int>（个位在 [0]）
 */
vector<int> toDigits(const string& s) {
    vector<int> d;
    d.reserve(s.size());
    for (int i = (int)s.size() - 1; i >= 0; --i) d.push_back(s[i] - '0');
    return d;
}

/**
 * @brief 低位在前的 vector<int> 转正序 string，自动去掉高位前导零
 */
string fromDigits(vector<int> d) {
    while (d.size() > 1 && d.back() == 0) d.pop_back();
    string s;
    s.reserve(d.size());
    for (int i = (int)d.size() - 1; i >= 0; --i) s.push_back(char('0' + d[i]));
    return s;
}

/**
 * @brief 非负比较：x < y，参数均为正序规范 string
 * @return x 小于 y 返回 true
 */
bool absLess(const string& x, const string& y) {
    if (x.size() != y.size()) return x.size() < y.size();
    return x < y;
}

/**
 * @brief 非负加法，返回正序 string
 */
string addAbs(const string& x, const string& y) {
    vector<int> a = toDigits(x), b = toDigits(y);
    int n = (int)max(a.size(), b.size());
    vector<int> c(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        if (i < (int)a.size()) c[i] += a[i];
        if (i < (int)b.size()) c[i] += b[i];
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    return fromDigits(c);
}

/**
 * @brief 非负减法，调用前提 x >= y，返回正序 string
 */
string subAbs(const string& x, const string& y) {
    vector<int> a = toDigits(x), b = toDigits(y);
    a.push_back(0);  // 借位哨兵，保证下标安全
    vector<int> c(a.size() - 1, 0);
    for (int i = 0; i < (int)c.size(); ++i) {
        int v = a[i] - (i < (int)b.size() ? b[i] : 0);
        if (v < 0) {
            v += 10;
            --a[i + 1];
        }
        c[i] = v;
    }
    return fromDigits(c);
}

/**
 * @brief 非负竖式乘法，返回正序 string
 */
string mulAbs(const string& x, const string& y) {
    if (x == "0" || y == "0") return "0";
    vector<int> a = toDigits(x), b = toDigits(y);
    vector<int> c(a.size() + b.size() + 1, 0);
    for (int i = 0; i < (int)a.size(); ++i)
        for (int j = 0; j < (int)b.size(); ++j)
            c[i + j] += a[i] * b[j];
    for (int k = 0; k < (int)c.size() - 1; ++k) {
        c[k + 1] += c[k] / 10;
        c[k] %= 10;
    }
    return fromDigits(c);
}

}  // namespace big_integer_detail

/**
 * @brief 大整数加法
 * @param a 非负大整数 string
 * @param b 非负大整数 string
 * @return 和，正序 string
 */
string bigAdd(string a, string b) {
    using namespace big_integer_detail;
    return normalize(addAbs(normalize(a), normalize(b)));
}

/**
 * @brief 大整数减法 a - b
 * @param a 被减数（非负）string
 * @param b 减数（非负）string
 * @return 差，正序 string；a < b 时结果带负号
 */
string bigSub(string a, string b) {
    using namespace big_integer_detail;
    a = normalize(a);
    b = normalize(b);
    if (!absLess(a, b)) return normalize(subAbs(a, b));
    return "-" + normalize(subAbs(b, a));
}

/**
 * @brief 大整数乘法
 * @param a 非负大整数 string
 * @param b 非负大整数 string
 * @return 积，正序 string
 */
string bigMul(string a, string b) {
    using namespace big_integer_detail;
    return normalize(mulAbs(normalize(a), normalize(b)));
}

/**
 * @brief 大整数整除带余除法 a / b
 * @param a 被除数（非负）string
 * @param b 除数（非负且非 0）string
 * @return pair，first 为商、second 为余数，满足 a = 商*b + 余数，0 <= 余数 < b
 * @note 模拟竖式，逐位试商，商位只可能是 0~9，用减法计数
 */
pair<string, string> bigDiv(string a, string b) {
    using namespace big_integer_detail;
    a = normalize(a);
    b = normalize(b);
    if (absLess(a, b)) return {"0", a};  // 商为 0，余数即被除数

    string quotient, rem = "0";
    for (char ch : a) {
        rem.push_back(ch);
        rem = normalize(rem);
        int k = 0;
        while (!absLess(rem, b)) {  // rem >= b 时不断减
            rem = subAbs(rem, b);
            ++k;
        }
        quotient.push_back(char('0' + k));
    }
    return {normalize(quotient), normalize(rem)};
}

#endif  // ACM_MATH_BIG_INTEGER_HPP
