# string 字符串

## 头文件

```cpp
#include <string>
```

## 定义

```cpp
string s;            // 空字符串
string s("hello");   // 初始化
string s(n, 'a');    // n 个字符 a
string s = "hello";   // 赋值
```

## 常用方法

| 方法 | 说明 | 时间复杂度 |
|------|------|------------|
| `.size()` / `.length()` | 返回长度 | O(1) |
| `.empty()` | 判断是否为空 | O(1) |
| `.clear()` | 清空 | O(n) |
| `.push_back(c)` | 尾部追加字符 | 均摊 O(1) |
| `.pop_back()` | 删除尾部字符 | O(1) |
| `.append(str)` | 追加字符串 | O(n) |
| `+` 运算符 | 拼接字符串 | O(n) |
| `.substr(pos, len)` | 截取子串 | O(n) |
| `.substr(pos)` | 从 pos 到结尾 | O(n) |
| `.find(str)` | 查找子串，返回起始位置（找不到返回 `string::npos`） | O(n·m) |
| `.find(c)` | 查找字符 | O(n) |
| `.rfind(str)` | 从后往前查找 | O(n·m) |
| `.replace(pos, len, str)` | 替换子串 | O(n) |
| `.insert(pos, str)` | 在 pos 插入字符串 | O(n) |
| `.erase(pos, len)` | 删除子串 | O(n) |
| `.erase(pos)` | 从 pos 删到结尾 | O(n) |
| `.c_str()` | 返回 C 风格字符数组 | O(1) |

## 访问与遍历

```cpp
s[i]          // 下标访问
s.at(i)       // 带越界检查的访问

for (int i = 0; i < s.size(); ++i) cout << s[i];
for (char c : s) cout << c;
```

## 常用操作

### 拼接

```cpp
string s = "hello";
s += " world";       // 追加
string s2 = s + "!";  // 拼接
```

### 截取子串

```cpp
s.substr(0, 5);   // 从位置 0 开始，取 5 个字符
s.substr(2);      // 从位置 2 到结尾
```

### 查找

```cpp
// 查找子串位置
int pos = s.find("ll");
if (pos == string::npos) {
    // 没找到
}

// 查找所有出现位置
size_t pos = 0;
while ((pos = s.find("ab", pos)) != string::npos) {
    // 处理 pos 位置
    pos++;
}
```

### 大小写转换

```cpp
// 单个字符
toupper(c);  // 转大写
tolower(c);  // 转小写

// 整个字符串转换
transform(s.begin(), s.end(), s.begin(), ::toupper);
transform(s.begin(), s.end(), s.begin(), ::tolower);
```

### 与数字转换

```cpp
// 数字 → 字符串
string s = to_string(123);      // "123"
string s2 = to_string(3.14);    // "3.140000"

// 字符串 → 数字
int x = stoi("123");
long long y = stoll("123456789");
double z = stod("3.14");
```

## 字符串流

```cpp
#include <sstream>

string s = "123 456 789";
stringstream ss(s);
int x, y, z;
ss >> x >> y >> z;  // 自动按空格分割
```

## ⚠️ 注意

- `string::npos` 是查找失败的返回值，通常是 `-1` 转成 `size_t`（无符号大数）
- 判断查找失败要用 `s.find("xx") == string::npos`，不要直接和 `-1` 比
