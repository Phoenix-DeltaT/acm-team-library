# ACM Team Library

> ACM-ICPC 团队代码共享库

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
│   ├── math/          # 数学：gcd、素数筛、快速幂（已落地）
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

- `math/`：gcd / lcm / 扩展欧几里得、素数判断与筛法、快速幂
- `utils/`：快速读入、cin/cout 加速

## 贡献方式

详见 [CONTRIBUTING.md](CONTRIBUTING.md)

**流程：** Fork → 新建分支 → 提交 PR → 审核通过 → 合并
