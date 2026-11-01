# deque 双端队列

```cpp
#include <deque>
```

## 定义

```cpp
deque<typeName> dq;              // 定义一个名字为 dq，元素类型为 typeName 的 deque

deque<string> dq = {"a", "b"};   // 初始化
deque<int> dq(3, 0);             // 初始化 3 个元素，每个都是 0
```

deque 元素的访问与数组一样

## 常用方法

| 方法 | 说明 |
|------|------|
| `.size()` | 返回当前元素个数 |
| `.empty()` | 判空 |
| `.at(i)` | 通过下标访问元素，有越界检查，越界抛出 out_of_range 异常 |
| `.front()` | 返回第一个元素的引用 |
| `.back()` | 返回最后一个元素的引用 |
| `.push_front(val)` | 在头部插入元素 |
| `.pop_front()` | 删除头部元素 |
| `.push_back(val)` | 在尾部插入元素 |
| `.pop_back()` | 删除尾部元素 |
| `.insert(pos, val)` | 在 pos 位置的前一位插入元素 |
| `.erase(pos)` | 删除 pos 位置的元素 |
| `.clear()` | 清空所有元素 |
| `.swap(other)` | 与另一个同类型的 deque 交换元素 |
| `.resize(n)` | 调整容器大小为 n |
