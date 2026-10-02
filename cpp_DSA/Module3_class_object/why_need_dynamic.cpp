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
     Student a(r,c,g);
    Student *p=&a;
     return p;//return garbage value jeti sudhu main function garbage value return kore
     //r ei function e static function vanish hoye jay main function e kicui jay na
     

}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Student *s=fun();
    cout<<s->roll<<" "<<s->cls<<" "<<s->gpa<<endl;
    
    return 0;
}