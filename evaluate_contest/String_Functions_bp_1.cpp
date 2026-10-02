#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        string p;
        cin >> p;
        if (p == "pop_back")
        {
            s.pop_back();
        }
        else if (p == "front")
        {
            cout << s.front() << endl;
        }
        else if (p == "back")
        {
            cout << s.back() << endl;
        }
        else if (p == "sort")
        {
            int l, r;
            cin >> l >> r;
            sort(s.begin() + l-1, s.begin() + r);
        }
        else if (p == "reverse")
        {
            int l, r;
            cin >> l >> r;
           reverse(s.begin() + l - 1, s.begin() + r);

        }
        else if (p == "pos")
        {
            int n;
            cin >> n;
            cout << s[n-1] << endl;
        }
        else if (p == "substr")
        {
            int l, r;
            cin >> l >> r;
            string sub = s.substr(l - 1, r - l + 1);
            cout<<sub<<endl;
        }
        else if (p == "push_back")
        {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
        else if(p=="print")
        {
            int pos;
            cin>>pos;
            cout<<s[pos-1]<<endl;
        }
    }
    return 0;
}