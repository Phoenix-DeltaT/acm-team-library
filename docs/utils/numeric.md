# numeric 数值算法

```cpp
#include <numeric>
```

## 常用函数

| 函数 | 说明 |
|------|------|
| `accumulate(begin, end, init)` | 累加求和，init 为初始值 |
| `iota(begin, end, value)` | 从 value 开始递增填充序列 |
| `gcd(a, b)` | 最大公约数（C++17） |
| `lcm(a, b)` | 最小公倍数（C++17） |
| `inner_product(b1, e1, b2, init)` | 内积（点积） |
| `partial_sum(begin, end, result)` | 计算前缀和 |
| `adjacent_difference(begin, end, result)` | 计算相邻元素差 |

## 使用示例

```cpp
vector<int> v = {1, 2, 3, 4, 5};

int sum = accumulate(v.begin(), v.end(), 0);      // 15

iota(v.begin(), v.end(), 0);                      // {0, 1, 2, 3, 4}

int g = gcd(12, 18);                               // 6
int l = lcm(12, 18);                               // 36
```
