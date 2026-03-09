#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Please input a string of random letters" << endl;
    cin >> s;
    sort(s.begin(), s.end());
    cout << "After sorting in alphabetically:" << s << endl;
    return 0;
}