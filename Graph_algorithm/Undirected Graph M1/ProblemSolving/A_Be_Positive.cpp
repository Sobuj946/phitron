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

        int n,c1=0,c2=0;
        cin >> n;


        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        for (int i = 0; i < n; i++)
        {
            
            if (v[i] == -1)
                c1++;
            else if (v[i] == 0)
                c2++;
           
        }  
        
      cout<<c1*2+c2<<endl;
      
        
    }
    return 0;
}