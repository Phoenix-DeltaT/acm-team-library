# map 映射

## 头文件

```cpp
#include <map>
```

## 定义

```cpp
map<KeyType, ValueType> mp;  // 定义一个名字为 mp 的映射

// 示例
map<string, int> mp;
map<int, vector<int>> mp;
```

> 💡 map 底层是**红黑树**，按键**升序**排列，所有操作 O(log n)

## 常用方法

| 方法 | 说明 | 时间复杂度 |
|------|------|------------|
| `mp[key] = val` | 插入/修改键值对 | O(log n) |
| `mp[key]` | 访问键对应的值（不存在会插入默认值） | O(log n) |
| `.insert({key, val})` | 插入键值对 | O(log n) |
| `.erase(key)` | 删除指定键 | O(log n) |
| `.erase(pos)` | 删除迭代器指向的元素 | O(log n) |
| `.find(key)` | 查找键，返回迭代器（找不到返回 .end()） | O(log n) |
| `.count(key)` | 判断键是否存在（返回 0 或 1） | O(log n) |
| `.size()` | 返回元素个数 | O(1) |
| `.empty()` | 判断是否为空 | O(1) |
| `.clear()` | 清空 | O(n) |
| `.begin()` | 指向首元素的迭代器 | O(1) |
| `.end()` | 指向尾后位置的迭代器 | O(1) |
| `.lower_bound(k)` | 第一个 >= k 的键 | O(log n) |
| `.upper_bound(k)` | 第一个 > k 的键 | O(log n) |

## 遍历方式

```cpp
// 方式一：范围 for
for (auto [key, val] : mp) {
    cout << key << " " << val << endl;
}

// 方式二：迭代器
for (auto it = mp.begin(); it != mp.end(); ++it) {
    cout << it->first << " " << it->second << endl;
}
```

## ⚠️ 注意事项

- 用 `mp[key]` 访问时，如果 key 不存在，会**自动插入**一个默认值（0 / 空字符串）
- 如果只想判断 key 是否存在，用 `.count(key)` 或 `.find(key) != mp.end()`，不要用 `mp[key]`
- 遍历时按键的升序输出

## unordered_map

```cpp
#include <unordered_map>

unordered_map<KeyType, ValueType> ump;
```

> 底层是**哈希表**，平均 O(1)，最坏 O(n)。不保证顺序，查询更快但不能二分。
