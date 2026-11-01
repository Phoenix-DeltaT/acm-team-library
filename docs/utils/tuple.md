# tuple 元组

```cpp
#include <tuple>
```

## 定义

```cpp
tuple<T1, T2, T3> t;
tuple<T1, T2, T3> t = {a, b, c};
auto t = make_tuple(a, b, c);
```

## 获取元素

```cpp
auto x = get<0>(t);   // 获取第 0 个元素
auto y = get<1>(t);   // 获取第 1 个元素
```

> 索引必须是编译期常量

## 其他

| 工具 | 说明 |
|------|------|
| `tuple_size<T>::value` | 获取元组大小 |
| `tuple_element<I, T>::type` | 获取第 I 个元素的类型 |
| `forward_as_tuple(args...)` | 转发元组 |
| `tie(a, b, c) = t` | 解包元组 |

## 示例

```cpp
auto t = make_tuple(1, "hello", 3.14);

int a;
string b;
double c;
tie(a, b, c) = t;  // 解包
```
