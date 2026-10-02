#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double gpa;
    int cls;
    Student(int r,int c,double g){
        roll=r;
        gpa=g;
        cls=c;
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int r,c;
    double g;
    cin>>r>>c>>g;
    Student a(r,c,g);
    cout<<a.roll<<" "<<a.cls<<" "<<a.gpa<<endl;
    
    return 0;
}