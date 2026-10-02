#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    // sort(v.begin(), v.end());
    // if(v[0]==0)
    // {
    //     v.erase(v.begin());
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
                if (v[i] + 1 == v[j])
                {
                    // if (i != j)
                        count++;
                        break;
                }
            
        }
    }
    cout << count << endl;
    return 0;
}