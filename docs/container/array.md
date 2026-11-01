# array 固定数组

```cpp
#include <array>
```

## 定义

```cpp
array<typeName, n_elem> arr;  // 创建名为 arr 的 array，包含 n_elem 个 typeName 元素
```

- `n_elem` 只能是常量，因为 array 是固定内存
- 访问元素时与数组相同
- 初始化时也与数组相同

## 常用方法

| 方法 | 说明 |
|------|------|
| `.size()` | 返回容器大小，即定义时指定的大小 |
| `.empty()` | 判空 |
| `.at(i)` | 通过下标访问元素，有越界检查，越界抛出 out_of_range 异常 |
| `.front()` | 返回第一个元素的引用 |
| `.back()` | 返回最后一个元素的引用 |
| `.data()` | 返回指向底层数组首元素的指针 |
| `.fill(val)` | 将所有元素赋值为 val |
| `.swap(other)` | 与另一个同类型同大小的 array 交换元素 |
