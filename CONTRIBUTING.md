# 贡献指南

感谢你为 ACM 团队代码库贡献代码！

## 贡献流程

### 1. Fork 仓库

点击右上角 Fork 按钮，将仓库复制到你的个人账号下。

### 2. 克隆到本地

```bash
git clone https://github.com/<你的用户名>/acm-team-library.git
cd acm-team-library
```

### 3. 新建分支

```bash
git checkout -b feature/你的功能名
# 例如：feature/segment-tree
```

**分支命名规范：**
- `feature/xxx` — 新增模板
- `fix/xxx` — 修复已有模板的 bug
- `docs/xxx` — 更新头文件速查文档

### 4. 提交修改

```bash
git add .
git commit -m "feat: 新增线段树模板"
```

**Commit 信息规范：**
- `feat: xxx` — 新增功能/模板
- `fix: xxx` — 修复问题
- `docs: xxx` — 文档更新
- `refactor: xxx` — 重构代码

### 5. 推送并发起 PR

```bash
git push origin feature/你的功能名
```

然后在 GitHub 页面上点击 **New Pull Request**，填写描述后提交。

### 6. 审核与合并

- 至少 1 名团队成员审核通过
- 审核通过后由维护者合并
- 合并后可删除分支

## 代码规范

### 模板代码要求

1. **必须有头注释**：说明功能、时间复杂度、适用场景
2. **函数/类必须有注释**：参数、返回值、注意事项
3. **下标约定**：默认 1-based（符合竞赛习惯）
4. **数据类型**：数值类默认用 `long long`，避免溢出
5. **代码可直接复制使用**：不能有未定义的依赖

### 文档要求

1. **风格简洁**：直接写用法，不要长篇大论
2. **中文为主**：方便团队成员快速查阅
3. **示例代码**：每个方法至少给一个用法示例

## 目录归属

| 目录 | 内容 | 示例 |
|------|------|------|
| `docs/container/` | STL 容器用法 | queue、vector、stack、map |
| `docs/algorithm/` | STL 算法用法 | sort、binary_search、next_permutation |
| `docs/string/` | 字符串相关 | string、cstring、regex |
| `templates/math/` | 数学模板 | gcd、快速幂、素数筛、组合数 |
| `templates/ds/` | 数据结构 | 线段树、树状数组、并查集 |
| `templates/graph/` | 图论模板 | Dijkstra、Kruskal、拓扑排序 |
| `templates/string/` | 字符串算法 | KMP、Trie、Manacher |
| `templates/utils/` | 工具类 | 快读、调试宏 |

## 注意事项

- 不要提交个人测试代码
- 不要提交编译器生成的文件（.exe、.obj 等）
- 不要提交大文件（>10MB）
- PR 描述要写清楚：新增了什么、解决了什么问题
