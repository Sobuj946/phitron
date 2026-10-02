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
Student fun()
{
    int r,c;
    double g;
    cin>>r>>c>>g;
     Student a(r,c,g);//function theke object return korle main function e oi 
     //object value pawa jay
//ekhane jodi pointer return kori tahole abar sei static function clear hbe and 
//main function e garbage value print korbe
     return a;

}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Student s=fun();
    cout<<s.roll<<" "<<s.cls<<" "<<s.gpa<<endl;
    
    return 0;
}