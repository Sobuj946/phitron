#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double gpa;
    int cls;
    Student(int roll,int cls,double gpa){
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;//this->roll eita a namok object ke point kortece
        //othoba *(this).roll=roll;
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