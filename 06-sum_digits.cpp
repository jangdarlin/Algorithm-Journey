#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int total_sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int num = s[i] - '0'; // 字符数字转换成整数。
            total_sum += num;
        }
        else if (s[i] == 'x')
            break;
    }
    cout << total_sum;
    return 0;
}
