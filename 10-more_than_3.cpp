#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    cout << "please enter a sentence:";
    getline(cin, line);
    stringstream ss(line);
    string word;
    vector<string> words;
    while (ss >> word) // 没有while的话只会执行一个word，while 的作用是：只要里面还有，我就一直抓
    {
        if (word.length() > 3)
        {
            words.push_back(word);
        }
    }
    cout << "words with more than 3 letters:" << endl;
    if (!words.empty()) // 倒置需要判断是否为空，正序不需要，因为正序不会去访问-1
    {
        for (int i = words.size() - 1; i >= 0; i--) // for循环是数，要把 for 循环放在 while 外面：等全部抓完了，最后才统一打印。
        {
            cout << words[i] << ' ';
        }
    }
    return 0;
}