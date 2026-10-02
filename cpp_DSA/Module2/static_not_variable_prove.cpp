#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    //stack memory sob kicu delete kore dey ata prove korbo
    int n;
    cin>>n;
    p=&n;
    cout<<"Fun function:"<<*p<<endl;
    return;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    fun();
    cout<<"main function:"<<*p<<endl;//garbage value add this line
    return 0;
}