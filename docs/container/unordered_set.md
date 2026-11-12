# unordered_set 无序集合

```cpp
#include <unordered_set>
```

> 对应的无序多重集合为 `unordered_multiset`，语法基本一致

## 定义

```cpp
unordered_set<T> us;                // 构造无序哈希集合
unordered_set<T> us(begin(), end()); // 使用迭代器区间构造
```

## 常用方法

| 方法 | 说明 |
|------|------|
| `.insert(val)` | 插入值 val，重复值不会重复插入 |
| `.emplace(val)` | 原位构造插入，效率更高 |
| `.erase(val)` | 删除值为 val 的元素 |
| `.erase(pos)` | 删除迭代器指向的元素 |
| `.clear()` | 清空所有元素 |
| `.find(val)` | 查找 val，返回迭代器，未找到返回 end() |
| `.count(val)` | 统计 val 个数，仅 0 或 1 |
| `.size()` | 返回元素个数 |
| `.empty()` | 判断是否为空 |
| `.begin()` / `.end()` | 返回首 / 尾迭代器 |
| `.bucket_count()` | 返回桶数量 |
| `.reserve(n)` | 预留空间，减少重哈希 |

## 与 set 的区别

| 对比项 | `set` | `unordered_set` |
|------|------|------|
| 底层实现 | 红黑树 | 哈希表 |
| 元素顺序 | 有序（升序） | 无序 |
| 查找复杂度 | O(log n) | 平均 O(1) |
| 适用场景 | 需要排序、有序遍历 | 只判重、查存在性 |
