# optional 可选值

```cpp
#include <optional>
```

## 定义

```cpp
optional<int> x;              // 空
optional<int> y = 42;         // 有值
optional<int> z = nullopt;     // 空
```

## 常用方法

| 方法 | 说明 |
|------|------|
| `.has_value()` | 是否有值 |
| `.value()` | 获取值（无值则抛异常） |
| `.value_or(default)` | 有值返回值，无值返回默认 |
| `.reset()` | 清空 |

## 示例

```cpp
optional<int> find_even(vector<int>& v) {
    for (int x : v) {
        if (x % 2 == 0) return x;
    }
    return nullopt;
}

auto result = find_even(v);
if (result.has_value()) {
    cout << "找到偶数：" << result.value();
} else {
    cout << "没找到偶数";
}
```

> 💡 用于函数可能返回无结果的场景
