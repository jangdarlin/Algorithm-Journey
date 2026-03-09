#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    cout << "please enter some words:";
    getline(cin, line);
    stringstream ss(line);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }
    cout << "sorted:" << endl;
    if (!words.empty()) // 正序这一行可省略
    {
        sort(words.begin(), words.end());
        // 只写 sort(words.begin(), words.end()) 时，C++ 默认使用 string 类自带的 < 运算符。在 C++ 的定义里，字符串的 < 运算就是字典序
        for (int i = 0; i < words.size(); i++)
        {
            cout << words[i] << ' ';
        }
    }
    return 0;
}