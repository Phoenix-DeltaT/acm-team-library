# queue 队列

## 头文件

```cpp
#include <queue>
```

## queue 普通队列

```cpp
queue<type_name> q;  // 定义一个名字为 q，类型为 type_name 的队列
```

### 常用方法

| 方法 | 说明 |
|------|------|
| `.push(val)` | 队尾插入元素 |
| `.pop()` | 队首弹出元素 |
| `.front()` | 返回队首元素的引用 |
| `.back()` | 返回队尾元素的引用 |
| `.empty()` | 判断队列是否为空 |
| `.size()` | 返回队列大小 |
| `.swap(other)` | 交换两个同类型队列的所有元素 |

> ⚠️ 队列不能随机访问中间的元素

### 完整语法

```cpp
// std::queue<元素类型, 底层容器类型> 队列名;
std::queue<int, std::list<int>> list_queue;  // 基于 list 实现的队列
```

---

## priority_queue 优先队列（堆）

```cpp
priority_queue<type_name> pq;  // 默认大顶堆
```

### 常用方法

| 方法 | 说明 |
|------|------|
| `.push(val)` | 堆尾插入并调整堆结构 |
| `.pop()` | 删除堆顶元素（最大/最小元素） |
| `.top()` | 返回堆顶元素的引用 |
| `.empty()` | 判断是否为空 |
| `.size()` | 返回队列大小 |
| `.swap(other)` | 交换两个同类型优先队列 |

> ⚠️ 优先队列不能随机访问中间元素

### 小顶堆定义

```cpp
priority_queue<int, vector<int>, greater<int>> min_pq;
```

### 完整语法

```cpp
// std::priority_queue<元素类型, 底层容器类型, 比较函数> 队列名;
```
