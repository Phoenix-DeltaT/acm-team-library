# fstream 文件流

```cpp
#include <fstream>
```

## 文件读取

```cpp
ifstream fin("input.txt");
int x;
fin >> x;
fin.close();
```

## 文件写入

```cpp
ofstream fout("output.txt");
fout << "hello world" << endl;
fout.close();
```

## 打开模式

| 模式 | 说明 |
|------|------|
| `ios::in` | 读模式 |
| `ios::out` | 写模式 |
| `ios::app` | 追加模式 |
| `ios::ate` | 打开后定位到末尾 |
| `ios::trunc` | 截断（清空已有内容） |
| `ios::binary` | 二进制模式 |
