#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    stack<char> st;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '(')
        {
            st.push(s[i]);
            int curr = st.size();
            cnt = max(cnt, curr);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
        }
    }
    cout << cnt << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}