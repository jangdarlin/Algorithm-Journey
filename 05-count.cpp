#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter thr word." << endl;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    // 如果字符串长度是 5（下标 0, 1, 2, 3, 4），i <= 5 会让程序去检查第 6 个位置（s[5]）。但 s[5] 那个位子其实是空的。
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }
    cout << "The letter 'a' appeared " << count << "times" << endl;
    return 0;
}