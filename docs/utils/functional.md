# functional 函数对象

```cpp
#include <functional>
```

提供函数对象、可调用对象包装工具，替代运算/比较符号

## 比较函数对象

| 函数对象 | 说明 |
|------|------|
| `less<T>()` | 等价 a < b，用于大根堆、升序比较 |
| `greater<T>()` | 等价 a > b，用于小根堆、降序比较 |
| `equal_to<T>()` | 等价 a == b，判断两值相等 |
| `not_equal_to<T>()` | 等价 a != b，判断两值不等 |

## 算术函数对象

| 函数对象 | 说明 |
|------|------|
| `plus<T>()` | 等价 a + b |
| `minus<T>()` | 等价 a - b |
| `multiplies<T>()` | 等价 a * b |
| `divides<T>()` | 等价 a / b |

## 逻辑函数对象

| 函数对象 | 说明 |
|------|------|
| `logical_and<T>()` | 等价 a && b |
| `logical_or<T>()` | 等价 a || b |

## 可调用对象包装

| 工具 | 说明 |
|------|------|
| `function<返回值(参数)>` | 包装函数/lambda/类成员函数 |
| `bind(函数, 参数...)` | 绑定函数参数，生成新可调用对象 |

## 使用案例

```cpp
less<int>()(3, 7);       // 返回 true（3 < 7）
greater<int>()(7, 3);   // 返回 true（7 > 3）
plus<int>()(2, 3);      // 返回 5（2 + 3）

function<bool(int,int)> cmp = greater<int>();  // 包装函数对象
```
