#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "plaese enter your name:";
    cin >> s;
    s[0] = toupper(s[0]);
    cout << "Hello " << s << "!" << endl;
    cout << "The length of your nmae is " << s.length() << endl;
    cout << "The first letter of your name is " << s[0] << endl;
    return 0;
}