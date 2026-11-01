# chrono 时间库

```cpp
#include <chrono>
```

## 时间时长

```cpp
chrono::nanoseconds   // 纳秒
chrono::microseconds  // 微秒
chrono::milliseconds  // 毫秒
chrono::seconds       // 秒
chrono::minutes       // 分钟
chrono::hours         // 小时
```

## 时钟

| 时钟 | 说明 |
|------|------|
| `system_clock` | 系统实时时钟 |
| `steady_clock` | 稳定时钟，不会被调整，适合计时 |
| `high_resolution_clock` | 最高分辨率时钟 |

## 计时示例

```cpp
auto start = chrono::steady_clock::now();
// 执行代码...
auto end = chrono::steady_clock::now();
auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
cout << "耗时：" << duration.count() << " 毫秒" << endl;
```
