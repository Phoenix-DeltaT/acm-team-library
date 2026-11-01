# set 集合

```cpp
#include <set>
```

> multiset 是相同的语法

## 定义

```cpp
set<T> s;                          // 构造升序 set
set<T, greater<T>> s;              // 构造降序 set
set<T> s(begin(), end());          // 使用迭代器构造 set
```

## 常用方法

| 方法 | 说明 |
|------|------|
| `.insert(val)` | 插入值 val |
| `.insert(begin(), end())` | 插入迭代器区间的所有元素 |
| `.erase(pos)` | 删除迭代器指向的元素 |
| `.erase(val)` | 删除值为 val 的元素 |
| `.clear()` | 删除所有元素 |
| `.find(val)` | 查找 val 值的位置 |
| `.count(val)` | 统计 val 个数 |
| `.size()` | 返回元素个数 |
| `.empty()` | 判空 |
| `.begin()` / `.end()` | 返回指向第一个和最后一个的迭代器 |
