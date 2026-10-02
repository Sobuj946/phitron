#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    void input()
    {
    {
            getline(cin,name);
        cin>>roll;
        cin>>marks;
        cin.ignore();

    }

}};

int main(){
    int n;
    cin>>n;
    cin.ignore();

    Student ar[n];
    for(int i=0;i<n;i++)
    {
        ar[i].input();
    }
    // int mn=INT_MAX;
    //  for(int i=0;i<n;i++)
    // {
    //    if(ar[i].marks<mn)//only one variable use this code
    //    {
    //     mn=ar[i].marks;
    //    }
    // }
    // cout<<mn<<endl;

    //using object 
    Student mn;
    mn.marks=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i].marks<mn.marks)
        {
            mn=ar[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<< mn.marks<<endl;

    
    return 0;
}