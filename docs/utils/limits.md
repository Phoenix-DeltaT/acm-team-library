# limits 数值极限

```cpp
#include <limits>
```

## numeric_limits 模板

```cpp
numeric_limits<T>::min()    // 最小值
numeric_limits<T>::max()    // 最大值
numeric_limits<T>::lowest()  // 最小有限值（负无穷附近）
numeric_limits<T>::epsilon() // 机器精度
numeric_limits<T>::infinity() // 无穷大
numeric_limits<T>::is_integer // 是否整数类型
numeric_limits<T>::is_signed  // 是否有符号
```

## 常用类型示例

```cpp
int imin = numeric_limits<int>::min();    // -2147483648
int imax = numeric_limits<int>::max();    // 2147483647

long long llmin = numeric_limits<long long>::min();
long long llmax = numeric_limits<long long>::max();

double dmax = numeric_limits<double>::max();
double dinf = numeric_limits<double>::infinity();  // 无穷大
double eps = numeric_limits<double>::epsilon();   // ~2.2e-16
```

> 💡 比 `climits` 更通用，支持模板参数
