# string 字符串

```cpp
#include <string>
```

## 读取整行

```cpp
getline(cin, str);  // 读取整行到 str
```

## 常用方法

| 方法 | 说明 |
|------|------|
| `.size()` | 返回当前对象的字符串长度（有效字符数，不包含 0） |
| `.assign(str, 0, 5)` | 从 str 的索引 0 开始，复制 5 个字符 |
| `.empty()` | 判空 |
| `.append(str, 0, 5)` | 追加 str 的前五个字符 |
| `.find(char)` / `.find(char, pos)` | 查找，返回索引位置 |
| `.replace(str, 6, 5)` | 从索引 6 开始，替换 5 个字符为 str |
| `.substr(pos, count)` | 子串截取操作 |
