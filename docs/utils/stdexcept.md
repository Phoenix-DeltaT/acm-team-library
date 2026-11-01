# stdexcept 异常处理

```cpp
#include <stdexcept>
#include <exception>
```

## 常见异常类

### 基类

```cpp
try {
    // 可能抛异常的代码
} catch (const std::exception& e) {
    std::cerr << "捕获到异常：" << e.what() << std::endl;
}
```

### 逻辑问题（logic_error 派生）

| 异常类 | 说明 |
|------|------|
| `invalid_argument` | 无效参数 |
| `domain_error` | 数学函数的参数超出定义域 |
| `length_error` | 尝试创建超出最大长度的对象 |
| `out_of_range` | 访问容器的索引超出有效范围 |

### 运行时错误（runtime_error 派生）

| 异常类 | 说明 |
|------|------|
| `range_error` | 数值计算结果超出预期范围 |
| `overflow_error` | 算数运算溢出 |
| `underflow_error` | 算数运算下溢 |

### 内存与类型转换异常

| 异常类 | 说明 |
|------|------|
| `bad_alloc` | "new" 无法分配足够内存 |
| `bad_cast` | "dynamic_cast" 类型转换失败 |
| `bad_typeid` | 空指针异常 |

## 自定义异常类

可通过继承 `std::exception` 或其派生类，定义业务相关的异常类型，增强错误信息的可读性。

```cpp
class FileOpenError : public std::runtime_error {
public:
    FileOpenError(const std::string& filename)
        : std::runtime_error("无法打开文件：" + filename) {}
};

// 使用示例
if (!file.is_open()) {
    throw FileOpenError("data.txt");
}
```

## 抛出异常

```cpp
if (b == 0) {
    throw runtime_error("除数不能为0");  // 抛出运行时错误
}

if (size <= 0) {
    throw invalid_argument("数组大小必须为正数");  // 抛出无效参数错误
}
```
