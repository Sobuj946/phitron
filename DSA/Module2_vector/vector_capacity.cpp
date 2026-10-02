#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    vector<int>v1(5); 
    cout<<v1.size()<<endl;//time complexity O(1)
    cout<<v1.max_size()<<endl;//time complexity O(1)
    cout<<v1.capacity()<<endl;//time complexity O(1) capacity 2 er multiplication hisebe thake
    v1.clear();
    cout<<v1.size()<<endl;
    vector<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    // v.clear();//O(n) complexity//vector er size zero kore tobe vector er man delete kore na
    cout<<v.size()<<endl;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    //vector resize function 
    v.resize(8,1);//vector er por 10 bosbe
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    //vector empty check using empty function
    if(v.empty())
    {
        cout<<"Empty the vector!\n";
    }
    else
    {
        cout<<"Not empty !\n";
    }
    return 0;
}