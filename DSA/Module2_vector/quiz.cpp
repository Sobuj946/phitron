#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//     vector<int> v={1,2,3,4};
// v.resize(2);
// v.resize(4);
vector<int> v={1,2,3,4,5};
v.erase(v.begin()+2, v.end());

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
    return 0;
}