# templates/ 竞赛代码块

本目录存放团队共同维护的可复用代码模板。

## 目录分类

- `math/` — 数学：数论、组合数学、模运算
- `ds/` — 数据结构：线段树、树状数组、并查集、ST表
- `graph/` — 图论：最短路、最小生成树、拓扑排序、LCA
- `string/` — 字符串：KMP、Trie、Manacher
- `utils/` — 工具：快速IO、调试宏

## 已落地模板

### math/ 数学

| 文件 | 内容 |
|------|------|
| `gcd.hpp` | 最大公约数 gcd、最小公倍数 lcm、扩展欧几里得 exgcd |
| `prime.hpp` | 试除法判素数、埃氏筛、欧拉线性筛 |
| `qpow.hpp` | 模快速幂、普通快速幂 |
| `bigInteger.hpp` | 大整数（高精度）加减乘除，string 接口，除法返回商与余数 |

### utils/ 工具

| 文件 | 内容 |
|------|------|
| `fastio_twoline.hpp` | 快速 IO 两行版：fast_io()，cin/cout 加速 |
| `fastio_full.hpp` | 快速 IO 完整版：read 快读、write 快写、read_str 读字符串 |

## 贡献方式

新增模板请通过 Pull Request 提交，详见 [CONTRIBUTING.md](../CONTRIBUTING.md)
