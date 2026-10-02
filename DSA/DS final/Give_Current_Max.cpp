#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int mark;
    Student(string name,int roll,int mark)
    {
        this->name=name;
        this->roll=roll;
        this->mark=mark;
    }
};
class cmp
{
    public:
    bool operator()(Student l,Student r)
    {
        if(l.mark>r.mark)
        {
            return false;
        }
        else if(l.mark==r.mark)
        {
            return l.roll>r.roll;
        }
        else
        return true;
         
    }
};
priority_queue<Student,vector<Student>,cmp>pq;

void print()
{
    if(!pq.empty())
   {
    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
   }
   else
   {
    cout<<"Empty\n";
   }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int roll;
        string name;
        int mark;
        cin>>name>>roll>>mark;
        Student s(name,roll,mark);
        pq.push(s);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            string name;
            int roll, mark;
            cin>>name>>roll>>mark;
            Student s(name,roll,mark);
            pq.push(s);
            print();
        }
        else if(x==1)
        {
            print();
        }
        else if(x==2)
        {
            if(!pq.empty())
            {
                if(!pq.empty())
                {
                    pq.pop();
                    print();

                }
                else
                {
                    cout<<"Empty\n";
                }
            }
            else
            {
                cout<<"Empty\n";
            }
        }
    }
 
    return 0;
}