#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
cin>>n;
      for(int i=0;i<n;i+=10)
    {
        for(int j=n;j>=0;j--)
        {
            cout << "Hello" << endl;
        }
    }
        //O(n*n)

    for(int i=0;i<n;i++)
    {
        cout << "Hi" << endl;
    }

    return 0;
}