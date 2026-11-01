# unordered_map 无序映射

```cpp
#include <unordered_map>
```

- `key&`, `value&` 键值对
- `begin&`, `end&` 迭代器首尾指针

## 定义

```cpp
unordered_map<key_type, value_type> ump;  // 定义无序键值对容器
```

## 常用方法

| 方法 | 说明 |
|------|------|
| `insert({key, value})` | 插入键值对 |
| `emplace(key, value)` | 原位构造插入，效率更高 |
| `operator[]` | 按键访问/赋值，不存在则默认构造 |
| `find(key)` | 查找 key，返回迭代器，未找到返回 end& |
| `count(key)` | 统计 key 个数，仅 0 或 1 |
| `erase(key)` | 删除指定 key 的键值对 |
| `erase(iterator)` | 删除迭代器指向元素 |
| `clear()` | 清空所有元素 |
| `size()` | 返回元素个数 |
| `empty()` | 判断是否为空 |
| `begin()` | 返回首迭代器 |
| `end()` | 返回尾迭代器 |
| `rbegin()` | 反向首迭代器 |
| `rend()` | 反向尾迭代器 |
| `bucket_count()` | 返回桶数量 |
| `bucket(key)` | 返回 key 所在桶编号 |
| `load_factor()` | 返回负载因子 |
| `rehash(n)` | 设定桶数量为 n |
| `reserve(n)` | 预留空间，减少重哈希 |
