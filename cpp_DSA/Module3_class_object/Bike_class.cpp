#include<bits/stdc++.h>
using namespace std;
class Bike{
    public:
    char color[100];
    double speed;
    double length;
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Bike a;
    cin.getline(a.color,100);
    cin>>a.speed>>a.length;
    cout<<a.color<<" "<<a.speed<<" "<<a.length<<endl;
    
    return 0;
}