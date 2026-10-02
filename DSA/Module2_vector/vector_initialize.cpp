#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    vector<int>v;//type 1
    vector<int>v1(5);//type 2
    vector<int>v2(10,-1);//type 3 10 ti value -1 hbe
    vector<int>v3(v2);//copy the vector vector v2
    for(int i=0;i<10;i++)
    {
        cout<<v3[i]<<" ";//copy vector print
    }

    //copy array
    int ar[5]={1,3,4,5,6};
    vector<int>v4(ar,ar+5);
    for(int i=0;i<5;i++)
    {
        cout<<v4[i]<<" ";
    }
    return 0;
}