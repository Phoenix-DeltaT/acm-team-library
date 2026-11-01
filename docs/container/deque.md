# deque 双端队列

## 头文件

```cpp
#include <deque>
```

## 定义

```cpp
deque<type_name> dq;  // 定义一个名字为 dq 的双端队列
```

## 常用方法

| 方法 | 说明 | 时间复杂度 |
|------|------|------------|
| `.push_back(val)` | 队尾插入 | O(1) |
| `.push_front(val)` | 队首插入 | O(1) |
| `.pop_back()` | 队尾删除 | O(1) |
| `.pop_front()` | 队首删除 | O(1) |
| `.front()` | 返回队首元素引用 | O(1) |
| `.back()` | 返回队尾元素引用 | O(1) |
| `.size()` | 返回大小 | O(1) |
| `.empty()` | 判断是否为空 | O(1) |
| `.clear()` | 清空 | O(n) |
| `.insert(pos, val)` | 在 pos 插入 | O(n) |
| `.erase(pos)` | 删除 pos 位置元素 | O(n) |
| `.erase(l, r)` | 删除 [l, r) 区间 | O(n) |

## 特点

- 支持**两端**快速插入和删除（O(1)）
- 支持**随机访问**（`dq[i]`），但比 vector 慢
- 内存分配比 vector 灵活（分段连续）

## 典型应用：单调队列

```cpp
deque<int> dq;  // 队列内元素保持单调
for (int i = 0; i < n; ++i) {
    while (!dq.empty() && a[dq.back()] >= a[i]) dq.pop_back();
    dq.push_back(i);
    if (dq.front() <= i - k) dq.pop_front();
}
```
