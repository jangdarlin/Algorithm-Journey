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
    while (ss >> word)
    {
        words.push_back(word);
    }
    cout << "Reversed result:" << endl;
    if (!words.empty())
    {
        for (int i = words.size() - 1; i >= 0; i--)
        {
            cout << words[i] << ' ';
        }
    }
    return 0;
}