# ACM Team Library

> ACM-ICPC 团队代码共享库

## ⚡ 快速 IO 模板（做题直接复制）

### 两行版（绝大多数题目够用，贴 main 开头）

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 之后正常用 cin / cout
}
```

封装文件：[`templates/utils/fastio_twoline.hpp`](templates/utils/fastio_twoline.hpp)

### 完整版（百万级数据、cin/cout 超时）

快读 `read<T>()`、快写 `write<T>()`、读字符串 `read_str()`，完整代码见 [`templates/utils/fastio_full.hpp`](templates/utils/fastio_full.hpp)：

```cpp
long long n = read<long long>();   // 快读（支持负数）
char s[64];
read_str(s);                       // 快读字符串
write(n);                          // 快写（不自动换行）
putchar('\n');
```

> ⚠️ 加速后不要混用 scanf/printf 与 cin/cout

---

## 目录结构

```
.
├── docs/               # 官方头文件速查（STL / 算法库用法）
│   ├── basics/         # C++ 基础：万能头、类型、语法
│   ├── container/      # 容器类：queue、vector、stack 等
│   ├── algorithm/      # 算法库：sort、binary_search 等
│   ├── string/         # 字符串相关
│   └── utils/          # 工具头文件：cmath、random、iomanip 等
│
├── templates/          # 竞赛代码块（团队成员贡献）
│   ├── math/          # 数学：gcd、素数筛、快速幂、高精度（已落地）
│   ├── ds/            # 数据结构：线段树、树状数组等
│   ├── graph/         # 图论：最短路、MST 等
│   ├── string/        # 字符串：KMP、Trie 等
│   └── utils/         # 工具：快读、调试宏（已落地）
│
├── CONTRIBUTING.md     # 贡献指南
└── README.md
```

## 两大板块

### 📚 docs/ — 官方头文件速查

整理 C++ 标准库头文件的常用类与方法用法，风格简洁直接，方便赛前快速查阅。

示例：[`docs/container/queue.md`](docs/container/queue.md)

### 🧩 templates/ — 竞赛代码块

团队成员共同维护的可复用代码模板。所有新增/修改均需通过 Pull Request，经审核后合并。

已落地模板见 [`templates/README.md`](templates/README.md)：

- `math/`：gcd / lcm / 扩展欧几里得、素数判断与筛法、快速幂、大整数加减乘除（string 接口）
- `utils/`：快速 IO 两行版 / 完整版、快读

## 贡献方式

详见 [CONTRIBUTING.md](CONTRIBUTING.md)

**流程：** Fork → 新建分支 → 提交 PR → 审核通过 → 合并
