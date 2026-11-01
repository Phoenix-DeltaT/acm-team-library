# stack 栈

## 头文件

```cpp
#include <stack>
```

## 定义

```cpp
stack<type_name> s;  // 定义一个名字为 s 的栈
```

## 常用方法

| 方法 | 说明 | 时间复杂度 |
|------|------|------------|
| `.push(val)` | 栈顶插入元素 | O(1) |
| `.pop()` | 栈顶弹出元素 | O(1) |
| `.top()` | 返回栈顶元素的引用 | O(1) |
| `.empty()` | 判断栈是否为空 | O(1) |
| `.size()` | 返回栈大小 | O(1) |
| `.swap(other)` | 交换两个同类型栈 | O(1) |

> ⚠️ 栈是后进先出（LIFO），只能访问栈顶，不能访问中间元素

## 示例

```cpp
stack<int> s;
s.push(1);
s.push(2);
s.push(3);

cout << s.top();  // 输出 3
s.pop();
cout << s.top();  // 输出 2

cout << s.size();  // 输出 2
```

## 底层容器

```cpp
// 默认用 deque 实现，也可以指定其他容器
std::stack<int, std::vector<int>> v_stack;  // 基于 vector
std::stack<int, std::list<int>> l_stack;    // 基于 list
```
