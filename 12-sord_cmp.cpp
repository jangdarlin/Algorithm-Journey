#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b) // 别用你脑子里那套默认规则了，以后听我的 cmp 指示。
{
    if (a.length() != b.length())
    {
        return a.length() < b.length();
    }
    return a < b; // 在 C++ 的定义里，字符串的 < 运算就是字典序
}

int main()
{
    string line;
    cout << "enter some word:";
    getline(cin, line);
    stringstream ss(line);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }
    cout << "after sort:" << endl;
    sort(words.begin(), words.end(), cmp);
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << ' ';
    }
    return 0;
}