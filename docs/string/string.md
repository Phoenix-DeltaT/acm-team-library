# string 字符串

```cpp
#include <string>
```

## 读取整行

```cpp
getline(cin, str);  // 读取整行到 str
```

## 长度与判空

| 方法 | 说明 |
|------|------|
| `.size()` / `.length()` | 返回字符串长度（有效字符数，不含结束符） |
| `.empty()` | 判断是否为空 |
| `.clear()` | 清空字符串 |
| `.resize(n)` | 改变长度为 n，多出的位置补默认字符 |

## 访问字符

| 方法 | 说明 |
|------|------|
| `str[i]` | 下标访问，越界不检查 |
| `.at(i)` | 下标访问，越界抛出异常 |
| `.front()` | 首字符 |
| `.back()` | 尾字符 |

## 拼接与追加

| 方法 | 说明 |
|------|------|
| `str1 + str2` | 拼接两个字符串 |
| `.append(s)` | 末尾追加字符串 s |
| `.append(s, pos, n)` | 追加 s 从 pos 开始的 n 个字符 |
| `.push_back(c)` | 末尾追加单个字符 |
| `.pop_back()` | 删除末尾字符 |

## 插入与删除

| 方法 | 说明 |
|------|------|
| `.insert(pos, s)` | 在 pos 处插入字符串 s |
| `.erase(pos, n)` | 从 pos 起删除 n 个字符 |
| `.assign(s, pos, n)` | 替换为 s 从 pos 开始的 n 个字符 |
| `.replace(pos, n, s)` | 从 pos 起的 n 个字符替换为 s |
| `.substr(pos, n)` | 截取从 pos 开始的 n 个字符 |

## 查找

| 方法 | 说明 |
|------|------|
| `.find(s)` / `.find(c)` | 正向查找，返回首个匹配索引 |
| `.find(s, pos)` | 从 pos 开始查找 |
| `.rfind(s)` | 反向查找，返回最后一个匹配索引 |
| `.find_first_of(s)` | 查找 s 中任一个字符首次出现的位置 |
| `.find_last_of(s)` | 查找 s 中任一个字符最后出现的位置 |

> ⚠️ 查找失败时返回 `string::npos`，判定写法：

```cpp
size_t pos = str.find("abc");
if (pos == string::npos) {
    // 未找到
}
```

## 比较

| 方法 / 运算符 | 说明 |
|------|------|
| `==` `!=` `<` `>` | 按字典序比较 |
| `.compare(s)` | 相等返回 0，小于返负，大于返正 |

## 类型转换

| 方法 | 说明 |
|------|------|
| `.c_str()` | 转为 C 风格 `const char*` |
| `to_string(x)` | 数值转字符串 |
| `stoi(s)` / `stoll(s)` | 字符串转 int / long long |
| `stod(s)` | 字符串转 double |
