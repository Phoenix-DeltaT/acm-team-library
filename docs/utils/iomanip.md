# iomanip 输出格式控制

```cpp
#include <iomanip>
```

## 精度与小数

| 操纵符 | 说明 |
|------|------|
| `fixed` | 以定点小数形式输出 |
| `setprecision(n)` | 保留 n 位有效数字；配合 `fixed` 表示 n 位小数 |
| `scientific` | 科学计数法输出 |

```cpp
double x = 3.14159265;
cout << fixed << setprecision(2) << x;   // 3.14
cout << setprecision(5) << x;            // 3.14159（默认有效数字）
```

## 宽度与填充

| 操纵符 | 说明 |
|------|------|
| `setw(n)` | 下一次输出占 n 个字符宽度（仅对下一次输出生效） |
| `setfill(ch)` | 宽度不足时用 ch 填充，设置后一直有效 |
| `left` | 左对齐 |
| `right` | 右对齐（默认） |

```cpp
cout << setw(5) << setfill('0') << 42;   // 00042
cout << left << setw(6) << "abc";        // abc
```

## 其他

| 操纵符 | 说明 |
|------|------|
| `setbase(n)` | 整数按 n 进制输出（8 / 10 / 16） |
| `boolalpha` | 布尔值输出 true / false |
