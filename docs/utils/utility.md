# utility 通用工具

```cpp
#include <utility>
```

## pair 键值对

```cpp
pair<first_type, second_type> p;
```

| 成员/方法 | 说明 |
|------|------|
| `.first` | 第一个元素 |
| `.second` | 第二个元素 |
| `make_pair(a, b)` | 构造 pair |

```cpp
pair<int, string> p = {1, "hello"};
auto p2 = make_pair(2, "world");
```

## 其他工具

| 工具 | 说明 |
|------|------|
| `swap(a, b)` | 交换两个变量 |
| `move(x)` | 转为右值引用，移动语义 |
| `forward<T>(x)` | 完美转发 |
| `rel_ops` | 关系运算符自动生成（命名空间） |
