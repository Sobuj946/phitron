#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
cin>>n;
int sum=0;
int k=2;
        for(int i=0;i*i<n;i++)
    {
        sum += i;
    }
//O(sqrt(n))

    for(int i=0;i<n;i++)
    {
        sum += i;
        i*=k;
    }

    return 0;
}