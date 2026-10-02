#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    s = "Hello Sobuj Chandra Roy";
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
    cout <<word << endl;

    }

    return 0;
}