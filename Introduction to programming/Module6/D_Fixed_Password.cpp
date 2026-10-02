#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1)
    {
        int n;
        cin >> n;
        if (n == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else if (n != 1999)
        {
            cout << "Wrong\n";
        }
    }
    return 0;
}