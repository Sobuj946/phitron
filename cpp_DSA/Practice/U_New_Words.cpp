#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        freq[(s[i] - 'a')]++;
    }
    int egypt_count = min({freq['e' - 'a'], freq['g' - 'a'], freq['y' - 'a'], freq['p' - 'a'], freq['t' - 'a']});
   cout<<egypt_count<<endl;
        return 0;
    }