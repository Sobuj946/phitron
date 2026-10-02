#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int sum=0;
        for(int i=0;i<n;i++)
    {
        for(int j=n;j>=0;j--)
        {
            for(int k=1;k<=n;k++)
            {
                sum += i+j+k;
            }
        }
    }
    ///O(n*n*n)

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            sum += i+j;
        }
    }

    return 0;
}