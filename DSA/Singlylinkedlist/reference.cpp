#include<bits/stdc++.h>
using namespace std;
void fun(int * &p)//same address point
{
    *p=10;

}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n=20;
    // cin>>n;
    int *p=&n;
    fun(p);
    cout<<"Main:"<<*p<<endl;
    return 0;
}