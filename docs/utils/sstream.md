# sstream 字符串流

```cpp
#include <sstream>
```

## ostringstream 输出字符串流

```cpp
ostringstream oss;
oss << "hello" << " " << 123;
string s = oss.str();
```

## istringstream 输入字符串流

```cpp
string s = "123 456 789";
istringstream iss(s);
int a, b, c;
iss >> a >> b >> c;
```

## 典型用途：字符串分割

```cpp
string line = "apple,banana,cherry";
replace(line.begin(), line.end(), ',', ' ');
istringstream iss(line);
string word;
while (iss >> word) {
    cout << word << endl;
}
```
