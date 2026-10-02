#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    stringstream s1(s);
    string word;
    s1 >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (s1 >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
    return 0;
}