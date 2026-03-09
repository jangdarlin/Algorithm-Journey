#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    cout << "Please enter a sentence:";
    getline(cin, line);
    stringstream ss(line);
    string word;
    cout << "Extracted words are:" << endl;
    while (ss >> word) // 如果抓到了单词，返回 true（循环继续）；如果机器空了，抓不到东西了，返回 false（循环停止）。
    {
        cout << word << endl;
    }
    return 0;
}