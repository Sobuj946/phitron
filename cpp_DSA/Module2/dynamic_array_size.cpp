#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    // int a[3];
    // for(int i=0;i<3;i++)
    // {
    //     cin>>a[i];
    // }
    // int b[5];
    // for(int i=0;i<3;i++)
    // {
    //     b[i]=a[i];
    // }
    // b[3]=30;
    // b[4]=78;
    //  for(int i=0;i<5;i++)//static memory te a array er jayga theke jacce 
    //  //jeta memory khoroch kore
    // {
    //     cout<<b[i]<<" ";
    // }
    
    int *a=new int[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    int *b=new int[5];
    for(int i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    b[3]=30;
    b[4]=78;
    delete[]a;//a array take delete kortece o array er size akhon 5 kore dicce dynamically
    //array ta delete hoileo sei array value gulo heap memory te thake ja a array ta 
    //delete hoileo heap a value gula store thake
     for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}