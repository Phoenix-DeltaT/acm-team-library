# cstring C 风格字符串

```cpp
#include <cstring>
```

## 长度与复制

| 函数 | 说明 |
|------|------|
| `strlen(s)` | 返回字符串长度（不含结束符 `\0`） |
| `strcpy(dst, src)` | 将 src 复制到 dst（含结束符） |
| `strncpy(dst, src, n)` | 最多复制 n 个字符 |
| `memcpy(dst, src, n)` | 从 src 复制 n 字节到 dst（不检查类型） |
| `memset(s, c, n)` | 将前 n 字节全部置为字符 c；数组初始化常用 `memset(a, 0, sizeof(a))` |

## 拼接

| 函数 | 说明 |
|------|------|
| `strcat(dst, src)` | 将 src 追加到 dst 末尾 |
| `strncat(dst, src, n)` | 最多追加 n 个字符 |

## 比较

| 函数 | 说明 |
|------|------|
| `strcmp(a, b)` | 相等返回 0；a < b 返回负数；a > b 返回正数 |
| `strncmp(a, b, n)` | 最多比较前 n 个字符，返回值规则同上 |
| `memcmp(a, b, n)` | 比较前 n 字节，返回值规则同上 |

## 查找

| 函数 | 说明 |
|------|------|
| `strchr(s, c)` | 查找字符 c 首次出现的地址，未找到返回 `NULL` |
| `strstr(s, substr)` | 查找子串首次出现的地址，未找到返回 `NULL` |

> ⚠️ 目标数组都要预留足够空间，避免越界写入；`memset` 按字节赋值，置 `0` 或 `-1` 之外的值慎用
