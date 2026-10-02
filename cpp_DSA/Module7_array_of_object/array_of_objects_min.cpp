#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    static int mi;//static variable 
    void input()
    {
        cin.ignore();
        getline(cin,name);
        cin>>roll;
        cin>>marks;
        if(marks<mi)
        {
            mi=marks;
        }
        cin.ignore();
    }
    void print()
    {
        cout<<name<<" "<<roll<<" "<<marks<<endl;
    }
    void min_mark_student_information()
    {
        
        
        if(marks==mi)
        {
            cout<<name<<" "<<roll<<" "<<marks<<endl;
        }
    }
};
int Student::mi=INT_MAX;
int main(){
    int n;
    cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++)
    {
        ar[i].input();
    }
     for(int i=0;i<n;i++)
    {
        ar[i].print();
    }
 for(int i=0;i<n;i++)
    {
        ar[i].min_mark_student_information();
    }

    
    return 0;
}