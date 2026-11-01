# memory 内存管理

```cpp
#include <memory>
```

## 智能指针

### unique_ptr 独占指针

```cpp
unique_ptr<T> ptr(new T);
auto ptr = make_unique<T>(args...);  // C++14 推荐
```

| 方法 | 说明 |
|------|------|
| `.get()` | 获取原始指针 |
| `.reset()` | 释放并置空 |
| `.release()` | 释放所有权，返回原始指针 |
| `*ptr` | 解引用 |
| `ptr->member` | 访问成员 |

> 独占所有权，不能拷贝，只能移动

### shared_ptr 共享指针

```cpp
shared_ptr<T> ptr(new T);
auto ptr = make_shared<T>(args...);  // 推荐
```

| 方法 | 说明 |
|------|------|
| `.use_count()` | 返回引用计数 |
| `.unique()` | 是否独占 |
| `.reset()` | 释放一次引用 |
| `.get()` | 获取原始指针 |

> 共享所有权，引用计数，最后一个销毁时释放

### weak_ptr 弱指针

```cpp
weak_ptr<T> wp = shared_ptr;
```

| 方法 | 说明 |
|------|------|
| `.lock()` | 提升为 shared_ptr |
| `.expired()` | 检查是否已过期 |

> 不控制生命周期，解决循环引用问题

## 其他

| 工具 | 说明 |
|------|------|
| `make_unique<T>(args...)` | 创建 unique_ptr（C++14） |
| `make_shared<T>(args...)` | 创建 shared_ptr |
| `addressof(x)` | 获取对象地址（即使重载了 &） |
| `alignas(N)` | 对齐说明符 |
