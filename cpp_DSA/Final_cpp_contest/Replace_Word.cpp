#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n--)
    {

        string s, t;
        cin >> s;
        cin >> t;

        size_t pos;
        while ((pos = s.find(t)) != string::npos)
        {
            s.replace(pos, t.length(), "#");
        }
        cout << s << endl;
    }
    return 0;
}