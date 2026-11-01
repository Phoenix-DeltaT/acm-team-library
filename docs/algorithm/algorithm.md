# algorithm 算法库

## 头文件

```cpp
#include <algorithm>
```

## 排序

### sort 快速排序

```cpp
sort(v.begin(), v.end());              // 升序
sort(v.begin(), v.end(), greater<int>());  // 降序

// 自定义排序
struct Cmp {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second > b.second;  // 第一维升序，第二维降序
    }
};
sort(v.begin(), v.end(), Cmp());
```

> 时间复杂度：O(n log n)

### stable_sort 稳定排序

```cpp
stable_sort(v.begin(), v.end());
```

> 相等元素保持原相对顺序，时间复杂度 O(n log n)

---

## 二分查找

### lower_bound 下界

```cpp
// 第一个 >= x 的位置
int pos = lower_bound(v.begin(), v.end(), x) - v.begin();
```

### upper_bound 上界

```cpp
// 第一个 > x 的位置
int pos = upper_bound(v.begin(), v.end(), x) - v.begin();
```

### binary_search 二分判定

```cpp
bool found = binary_search(v.begin(), v.end(), x);  // 存在返回 true
```

> ⚠️ 前提：数组必须**有序**（升序）
> 时间复杂度：O(log n)

---

## 常用操作

### reverse 反转

```cpp
reverse(v.begin(), v.end());  // 反转数组/字符串
```

### unique 去重

```cpp
// 注意：必须先排序！
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
```

> `unique` 把相邻重复元素移到末尾，返回新的尾后迭代器

### max / min

```cpp
int a = max(x, y);           // 两个数取最大
int b = min({x, y, z, w});  // 多个数取最大（C++11）
int mx = *max_element(v.begin(), v.end());  // 数组最大值
int mn = *min_element(v.begin(), v.end());  // 数组最小值
```

### swap 交换

```cpp
swap(a, b);  // 交换两个变量
```

---

## 排列

### next_permutation 下一个排列

```cpp
// 生成下一个字典序排列，没有则返回 false
sort(v.begin(), v.end());  // 先排升序（最小字典序）
do {
    // 处理当前排列
} while (next_permutation(v.begin(), v.end()));
```

### prev_permutation 上一个排列

```cpp
prev_permutation(v.begin(), v.end());
```

---

## 计数与填充

### count 计数

```cpp
int cnt = count(v.begin(), v.end(), x);  // 统计 x 出现次数
```

### fill 填充

```cpp
fill(v.begin(), v.end(), 0);  // 全部填 0
fill(a, a + n, -1);           // C 风格数组
```

### accumulate 求和（在 numeric 头文件）

```cpp
#include <numeric>
int sum = accumulate(v.begin(), v.end(), 0);  // 求和，初始值 0
```

---

## 其他常用

```cpp
// 最大值/最小值元素位置
int mx_pos = max_element(v.begin(), v.end()) - v.begin();
int mn_pos = min_element(v.begin(), v.end()) - v.begin();

// 合并两个有序数组
merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));

// 交集/并集/差集（需有序）
set_union(...);      // 并集
set_intersection(...);  // 交集
set_difference(...);    // 差集
```
