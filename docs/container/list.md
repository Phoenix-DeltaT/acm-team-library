# list 链表

```cpp
#include <list>
```

## 定义

```cpp
list<typeName> lst;              // 定义一个名字为 lst，元素类型为 typeName 的链表

list<string> lst = {"a", "b", "c"};  // 初始化
list<int> lst(5, 10);                // 初始化 5 个元素，每个都是 10
```

## 常用方法

| 方法 | 说明 |
|------|------|
| `.size()` | 返回当前元素个数 |
| `.empty()` | 判空 |
| `.front()` | 返回第一个元素的引用 |
| `.back()` | 返回最后一个元素的引用 |
| `.push_front(val)` | 在头部插入元素 |
| `.pop_front()` | 删除头部元素 |
| `.push_back(val)` | 在尾部插入元素 |
| `.pop_back()` | 删除尾部元素 |
| `.insert(pos, val)` | 在 pos 位置的前一位插入元素 |
| `.erase(pos)` | 删除 pos 位置的元素 |
| `.clear()` | 清空所有元素 |
| `.swap(other)` | 与另一个同类型的 list 交换元素 |
| `.sort()` | 对元素排序 |
| `.reverse()` | 反转链表中元素的顺序 |
| `.remove(val)` | 删除所有值为 val 的元素 |
