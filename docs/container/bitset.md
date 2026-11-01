# bitset 位集

```cpp
#include <bitset>
```

## 定义

```cpp
bitset<N> bs;        // N 位的位集，默认全 0
bitset<N> bs(u);    // 从整数 u 构造
bitset<N> bs(s);    // 从字符串构造
```

> N 必须是编译期常量

## 常用方法

| 方法 | 说明 |
|------|------|
| `.set(i)` | 第 i 位置 1 |
| `.set()` | 全部置 1 |
| `.reset(i)` | 第 i 位置 0 |
| `.reset()` | 全部置 0 |
| `.flip(i)` | 第 i 位取反 |
| `.flip()` | 全部取反 |
| `.test(i)` | 测试第 i 位 |
| `.size()` | 返回位数 |
| `.count()` | 返回 1 的个数 |
| `.any()` | 是否有任意 1 |
| `.none()` | 是否全为 0 |
| `.all()` | 是否全为 1（C++11） |
| `.to_string()` | 转为字符串 |
| `.to_ulong()` | 转为 unsigned long |
| `.to_ullong()` | 转为 unsigned long long |

## 位运算

```cpp
bs1 & bs2   // 与
bs1 | bs2   // 或
bs1 ^ bs2   // 异或
~bs1        // 取反
bs1 <<= n   // 左移
bs1 >>= n   // 右移
```

## 示例

```cpp
bitset<8> bs("10110010");
bs.set(0);      // 第 0 位置 1
bs.reset(7);    // 第 7 位置 0
cout << bs.count();  // 输出 4（4 个 1）
```
