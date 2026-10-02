#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
      int i=0,sum = 0;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            sum += j;//O(n*n)
            j+=2;
        }
        i++;
    }

    return 0;
}