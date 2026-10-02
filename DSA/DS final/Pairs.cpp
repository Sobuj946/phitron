#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    Student(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
    }
};
class cmp
{
    public:
    bool operator()(Student l,Student r)
    {
        if(l.name<r.name)
        {
            return false;
        }
        else if(l.name==r.name)
        {
            return l.roll<r.roll;
        }
         return true;
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i=0;i<n;i++)
    {
        int roll;
        string name;
        cin>>name>>roll;
        Student s(name,roll);
        pq.push(s);
    }
   while(!pq.empty())
   {
    cout<<pq.top().name<<" "<<pq.top().roll<<endl;
    pq.pop();
   }
    return 0;
}