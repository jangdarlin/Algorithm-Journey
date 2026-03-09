#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    double temp, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cout << sum << endl;
    return 0;
}