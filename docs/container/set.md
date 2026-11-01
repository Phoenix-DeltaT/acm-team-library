# set 集合

## 头文件

```cpp
#include <set>
```

## 定义

```cpp
set<type_name> s;  // 定义一个名字为 s 的集合（自动去重）
```

> 💡 set 底层是**红黑树**，元素**自动排序+去重**，所有操作 O(log n)

## 常用方法

| 方法 | 说明 | 时间复杂度 |
|------|------|------------|
| `.insert(val)` | 插入元素（重复则忽略） | O(log n) |
| `.erase(val)` | 删除指定元素 | O(log n) |
| `.erase(pos)` | 删除迭代器指向的元素 | O(log n) |
| `.find(val)` | 查找元素，返回迭代器（找不到返回 .end()） | O(log n) |
| `.count(val)` | 判断元素是否存在（返回 0 或 1） | O(log n) |
| `.size()` | 返回元素个数 | O(1) |
| `.empty()` | 判断是否为空 | O(1) |
| `.clear()` | 清空 | O(n) |
| `.begin()` | 指向最小元素的迭代器 | O(1) |
| `.end()` | 指向尾后位置的迭代器 | O(1) |
| `.rbegin()` | 反向迭代器（指向最大元素） | O(1) |
| `.lower_bound(x)` | 第一个 >= x 的元素 | O(log n) |
| `.upper_bound(x)` | 第一个 > x 的元素 | O(log n) |

## 遍历方式

```cpp
for (auto x : s) cout << x << " ";  // 从小到大输出

for (auto it = s.rbegin(); it != s.rend(); ++it)
    cout << *it << " ";  // 从大到小输出
```

## multiset 多重集合

```cpp
#include <set>

multiset<type_name> ms;  // 允许重复元素
```

> 和 set 类似，但允许重复值。`.count(val)` 会返回重复个数。

> ⚠️ 删除时注意：`ms.erase(val)` 会删掉所有等于 val 的元素；要删一个用 `ms.erase(ms.find(val))`

## unordered_set

```cpp
#include <unordered_set>

unordered_set<type_name> us;  // 哈希表实现，O(1)，无序
```
