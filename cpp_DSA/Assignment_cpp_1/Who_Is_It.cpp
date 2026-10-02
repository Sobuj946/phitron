#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    string name;
    char section;
    int mark;
  void compare(Student a,Student b,Student c)
  {
    int mark_max=max({a.mark,b.mark,c.mark});
    Student good;
    good.mark=mark_max;
    good.id=INT_MAX;
    if(a.mark==mark_max&&(good.id>a.id))
    {
        good=a;
    }
    else if(b.mark==mark_max&&(good.id>b.id))
    {
        good=b;
    }
     else if(c.mark==mark_max&&(good.id>c.id))
    {
        good=c;
    }
    cout<<good.id<<" "<<good.name<<" "<<good.section<<" "<<good.mark<<endl;
  }
};

int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Student a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        // int id1;
        // string name;
        // char sect;
        // int mar;
        Student c;
        cin.ignore();
        cin>>a.id>>a.name>>a.section>>a.mark;
        cin>>b.id>>b.name>>b.section>>b.mark;
        cin>>c.id>>c.name>>c.section>>c.mark;
        c.compare(a,b,c);
    }
    return 0;
}