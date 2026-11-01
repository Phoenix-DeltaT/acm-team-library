# vector 向量

```cpp
#include <vector>
```

## 定义

```cpp
vector<typeName> vt(n_elem);  // 创建名为 vt 的 vector，存储 n_elem 个 typeName 元素
```

访问元素时与数组相同

## 常用方法

| 方法 | 说明 |
|------|------|
| `.at(i)` | 访问元素，并在运行期间捕获非法索引 |
| `.front()` | 访问第一个元素 |
| `.back()` | 访问最后一个元素 |
| `.data()` | 返回指向底层数组的指针 |
| `.push_back(val)` | 在尾部插入元素 val |
| `.insert(pos, val)` | 在 pos 位置插入 val |
| `.pop_back()` | 删除尾部元素 |
| `.erase(pos)` | 删除 pos 位置的元素 |
| `.erase(beg, end)` | 删除 [beg, end) 区间的元素 |
| `.clear()` | 清空所有元素 |
| `.size()` | 返回元素个数 |
| `.capacity()` | 返回当前容量 |
| `.empty()` | 判断是否为空 |
| `.shrink_to_fit()` | 缩减容量至与元素个数匹配 |
| `.swap(other)` | 复制 vector |
| `.begin()` | 返回第一个元素的引用 |
| `.end()` | 返回最后一个元素的引用 |
