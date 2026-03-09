#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    cout << "Please enter a sentence:";
    getline(cin, line);
    stringstream ss(line);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }
    cout << "Total stroed words is:" << words.size() << endl;
    if (!words.empty())
    {
        cout << "The first word is:" << words[0] << endl;
    }
    return 0;
}