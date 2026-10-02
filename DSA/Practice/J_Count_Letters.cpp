#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    vector<int> freq(26);
    for (int i = 0; i < s.size(); i++)
    {
        freq[(s[i] - 'a')]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << (char)(i + 'a') << " " << ": " << freq[i] << endl;
        }
    }

    return 0;
}