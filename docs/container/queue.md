# queue 队列

```cpp
#include <queue>
```

## queue 普通队列

```cpp
queue<type_name> q;  // 定义一个名字为 q，类型为 type_name 的队列
```

| 方法 | 说明 |
|------|------|
| `.push(val)` | 队尾插入 |
| `.pop()` | 队首弹出 |
| `.front()` | 返回队首元素的引用 |
| `.back()` | 返回队尾元素的引用 |
| `.empty()` | 判断队列是否为空 |
| `.size()` | 返回队列大小 |
| `.swap(other)` | 交换当前队列与另一个同类型队列的所有元素 |

> ⚠️ 队列不能随机访问中间的元素

```cpp
// 语法：std::queue<元素类型, 底层容器类型> 队列名;
std::queue<int, std::list<int>> list_queue;  // 基于 list 实现的队列
```

## priority_queue 优先队列（堆）

```cpp
priority_queue<type_name> pq;  // 定义一个名字为 pq，类型为 type_name 的优先队列（默认大顶堆）
```

| 方法 | 说明 |
|------|------|
| `.push(val)` | 堆尾插入并调整堆结构 |
| `.pop()` | 删除堆顶元素（最大/最小元素） |
| `.top()` | 返回堆顶元素的引用 |
| `.empty()` | 判断优先队列是否为空 |
| `.size()` | 返回优先队列大小 |
| `.swap(other)` | 交换两个同类型优先队列 |

> ⚠️ 优先队列不能随机访问中间元素

```cpp
// 小顶堆定义
priority_queue<int, vector<int>, greater<int>> min_pq;

// 语法：std::priority_queue<元素类型, 底层容器类型, 比较函数> 队列名;
```
