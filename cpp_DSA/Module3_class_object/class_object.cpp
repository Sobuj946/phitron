#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Student a,b;
    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cin.ignore();
     cin.getline(b.name,100);
    cin>>b.roll>>b.gpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;

    
    return 0;
}