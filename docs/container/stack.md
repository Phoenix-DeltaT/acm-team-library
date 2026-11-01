# stack 栈

```cpp
#include <stack>
```

## 定义

```cpp
stack<typeName> s;  // 定义一个名为 s，数据类型为 typeName 的栈
```

## 常用方法

| 方法 | 说明 |
|------|------|
| `.top()` | 返回栈顶元素 |
| `.empty()` | 判空 |
| `.size()` | 返回元素个数 |
| `.push(val)` | 栈顶插入元素 |
| `.emplace()` | 在栈顶直接构造元素 |
| `.pop()` | 栈顶弹出元素 |
| `.swap(other)` | 交换当前栈与另一个栈的内容（需相同类型） |
