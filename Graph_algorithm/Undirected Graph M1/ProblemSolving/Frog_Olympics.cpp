#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool l=(n == 3 || n == 4 || n >= 6);
        bool j=(n == 3 || n == 5 || n == 6 || n >= 8);

        if (l&&j)
        {
              cout << "Both\n";
           
        }
        else if (j)
        {
            cout << "Jumpster\n";
        }
        else if (l)
        {
             cout << "Leapy\n";
          
        }
        else
        {
            cout << "None\n";
        }
    }
    return 0;
}
