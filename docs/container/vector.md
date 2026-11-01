# vector 向量

## 头文件

```cpp
#include <vector>
```

## 定义

```cpp
vector<type_name> v;           // 空向量
vector<type_name> v(n);        // 大小为 n，默认初始化
vector<type_name> v(n, val);   // 大小为 n，初始值为 val
vector<vector<int>> v(n, vector<int>(m));  // n×m 二维数组
```

## 常用方法

| 方法 | 说明 | 时间复杂度 |
|------|------|------------|
| `.push_back(val)` | 尾部插入元素 | 均摊 O(1) |
| `.pop_back()` | 尾部删除元素 | O(1) |
| `.size()` | 返回元素个数 | O(1) |
| `.empty()` | 判断是否为空 | O(1) |
| `.clear()` | 清空向量 | O(n) |
| `.front()` | 返回首元素引用 | O(1) |
| `.back()` | 返回尾元素引用 | O(1) |
| `.resize(n)` | 改变大小为 n | O(n) |
| `.resize(n, val)` | 改变大小，新元素初始化为 val | O(n) |
| `.insert(pos, val)` | 在 pos 位置插入元素 | O(n) |
| `.erase(pos)` | 删除 pos 位置的元素 | O(n) |
| `.erase(l, r)` | 删除 [l, r) 区间的元素 | O(n) |
| `.begin()` | 指向首元素的迭代器 | O(1) |
| `.end()` | 指向尾后位置的迭代器 | O(1) |

## 访问方式

```cpp
v[i]        // 下标访问（不检查越界）
v.at(i)     // 下标访问（越界抛异常）

// 遍历
for (int i = 0; i < v.size(); ++i) cout << v[i];
for (auto x : v) cout << x;
for (auto it = v.begin(); it != v.end(); ++it) cout << *it;
```

## 常用操作

```cpp
// 排序
sort(v.begin(), v.end());              // 升序
sort(v.begin(), v.end(), greater<int>());  // 降序

// 反转
reverse(v.begin(), v.end());

// 去重（先排序再用 unique）
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());

// 查找（二分，需有序）
int pos = lower_bound(v.begin(), v.end(), x) - v.begin();
```
