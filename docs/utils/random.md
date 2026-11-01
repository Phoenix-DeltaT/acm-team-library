# random 随机数

```cpp
#include <random>
```

## C 风格（简单）

```cpp
#include <cstdlib>
#include <ctime>

srand(time(0));        // 初始化种子（只需一次）
int x = rand() % 100;  // 0~99 随机数
```

## C++ 风格（推荐）

### 随机引擎

| 引擎 | 说明 |
|------|------|
| `default_random_engine` | 默认随机引擎 |
| `mt19937` | 梅森旋转算法（常用） |

### 分布

| 分布 | 说明 |
|------|------|
| `uniform_int_distribution<int>(a, b)` | 均匀整数分布 [a, b] |
| `uniform_real_distribution<double>(a, b)` | 均匀实数分布 [a, b] |

## 使用示例

```cpp
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
uniform_int_distribution<int> dist(1, 100);
int x = dist(rng);
```

> 💡 竞赛中推荐用 mt19937，比 rand() 质量高很多
