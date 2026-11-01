# algorithm 算法库

```cpp
#include <algorithm>
```

- `begin&`, `end&` 均为迭代器的首尾指针

## 排序

| 函数 | 说明 |
|------|------|
| `sort(begin&, end&)` | 快速排序 |
| `stable_sort(begin&, end&)` | 稳定排序（归并排序） |

## 查找

| 函数 | 说明 |
|------|------|
| `find(begin&, end&, num)` | 在迭代器中寻找 num，返回迭代器，未找到返回 end& |
| `binary_search(begin&, end&, num)` | 在迭代器中寻找 num，返回 bool，需要序列有序 |

## 操作

| 函数 | 说明 |
|------|------|
| `copy(begin&, end&, target&)` | 复制序列 |
| `swap(a, b)` | 交换 a、b 两个元素（容器） |
| `replace(begin&, end&, old_val, new_val)` | 将范围内的所有 old_val 换成 new_val |
| `next_permutation(begin&, end&)` | 生成序列的下一个字典序排列，无则返回 false |
| `prev_permutation(begin&, end&)` | 生成序列的上一个字典序排列，无则返回 false |
| `shuffle(begin&, end&)` | 随机打乱序列 |

## 最值与比较

| 函数 | 说明 |
|------|------|
| `max(a, b)` | 返回两数的最大值 |
| `min(a, b)` | 返回两数的最小值 |
| `lexicographical_compare(begin1&, end1&, begin2&, end2&)` | 比较两序列的字典序，true 表示第一个序列更小 |
| `count(begin&, end&, val)` | 统计序列中等于 val 的元素个数 |

## 集合运算（有序）

| 函数 | 说明 |
|------|------|
| `set_union(begin1&, end1&, begin2&, end2&, res&)` | 集合并集，返回合并后的序列的末尾迭代器 |
| `set_intersection(begin1&, end1&, begin2&, end2&, res&)` | 集合交集 |

## 堆操作

| 函数 | 说明 |
|------|------|
| `make_heap(begin&, end&, cmp)` | 建堆 |
| `sort_heap(begin&, end&, cmp)` | 拆堆 |
| `push_heap(...)` | 尾部插入 |
| `pop_heap(...)` | 弹出到末尾 |

## 其他

```cpp
accumulate(begin&, end&, 0)  // 累加求和，0 为初始值（#include <numeric>）
```
