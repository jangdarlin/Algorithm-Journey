#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[105];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n); // 排序正好是a[0]到a[n-1]
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}