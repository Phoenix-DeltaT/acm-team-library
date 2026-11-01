# complex 复数

```cpp
#include <complex>
```

## 定义

```cpp
complex<double> z1(1.0, 2.0);   // 1 + 2i
complex<double> z2(3.0, 4.0);
```

## 成员函数

| 方法 | 说明 |
|------|------|
| `.real()` | 实部 |
| `.imag()` | 虚部 |
| `.abs()` | 模长 |
| `.arg()` | 辐角（弧度） |
| `.norm()` | 模长平方 |
| `.conj()` | 共轭复数 |

## 运算

```cpp
auto z3 = z1 + z2;
auto z4 = z1 - z2;
auto z5 = z1 * z2;
auto z6 = z1 / z2;
```

## 示例

```cpp
complex<double> z(3, 4);
cout << abs(z);      // 5（模长）
cout << z.real();   // 3
cout << z.imag();    // 4
```
