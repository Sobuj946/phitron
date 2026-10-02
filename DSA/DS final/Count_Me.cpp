#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;

        getline(cin, s);
        map<string, int> mp;
        string mxs;
        stringstream ss(s);
        string word;
        int mx = 0;
        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > mx)
            {
                mx = mp[word];
                mxs = word;
            }
        }
        cout << mxs << " " << mx << endl;
    }
    return 0;
}
