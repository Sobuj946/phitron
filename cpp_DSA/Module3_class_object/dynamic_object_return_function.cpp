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
Student *fun()
{
    int r,c;
    double g;
    cin>>r>>c>>g;
     Student *korim=new Student(r,c,g);
     return korim;//solve static alloction for dynamic allocation
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Student *s=fun();
    cout<<s->roll<<" "<<s->cls<<" "<<s->gpa<<endl;
    
    return 0;
}