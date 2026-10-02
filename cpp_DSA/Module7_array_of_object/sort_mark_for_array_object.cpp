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
        
        cin>>name>>roll>>marks;
        cin.ignore();

    }

}};
bool cmp(Student l,Student r)
{
    if(l.marks<r.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    cin.ignore();

    Student ar[n];
    for(int i=0;i<n;i++)
    {
        ar[i].input();
    }
    sort(ar,ar+n,cmp);
    for(int i=0;i<n;i++)
    {
    cout<<ar[i].name<<" "<<ar[i].roll<<" "<< ar[i].marks<<endl;
    }

    
    return 0;
}