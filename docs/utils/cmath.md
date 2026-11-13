# cmath 数学函数

```cpp
#include <cmath>
```

## 绝对值

| 函数 | 说明 |
|------|------|
| `abs(int)` | 整数绝对值 |
| `fabs(double)` | 浮点数绝对值 |
| `llabs(long long)` | 长整型绝对值 |

## 取整

| 函数 | 说明 |
|------|------|
| `floor(double)` | 向下取整 |
| `ceil(double)` | 向上取整 |
| `round(double)` | 四舍五入 |

## 模运算

| 函数 | 说明 |
|------|------|
| `fmod(double x, double y)` | 浮点取模 |

## 指数与对数

| 函数 | 说明 |
|------|------|
| `exp(double)` | e^x |
| `pow(double x, double y)` | x^y |
| `log(double)` | 自然对数 |
| `log10(double)` | 常用对数（底 10） |
| `log2(double)` | 底 2 对数 |

## 三角函数

| 函数 | 说明 |
|------|------|
| `sin(double)` | 正弦 |
| `cos(double)` | 余弦 |
| `tan(double)` | 正切 |

## 反三角函数

| 函数 | 说明 |
|------|------|
| `asin(x)` | 反正弦，返回值 [-π/2, π/2]，要求 x ∈ [-1, 1] |
| `acos(x)` | 反余弦，返回值 [0, π]，要求 x ∈ [-1, 1] |
| `atan(x)` | 反正切，返回值 [-π/2, π/2] |
| `atan2(y, x)` | 按坐标 (x, y) 求极角，返回值 [-π, π]，可判断象限 |

> ⚠️ 三角函数入参与返回值均为弧度；`atan2` 第一个参数是 y，第二个是 x，顺序不要写反

## 几何常用

| 函数 / 常量 | 说明 |
|------|------|
| `hypot(x, y)` | 直角三角形斜边 √(x²+y²)，内部防止平方溢出 |
| `PI = acos(-1.0)` | 圆周率常量（标准库无内置 PI，竞赛常用此写法） |

```cpp
const double PI = acos(-1.0);

// 角度 → 弧度
double rad = deg * PI / 180.0;
// 弧度 → 角度
double deg = rad * 180.0 / PI;

double d = hypot(x, y);     // 点到原点距离
double ang = atan2(y, x);   // 点 (x, y) 的极角
```

## 开方

| 函数 | 说明 |
|------|------|
| `sqrt(double)` | 平方根 |
| `cbrt(double)` | 立方根 |
