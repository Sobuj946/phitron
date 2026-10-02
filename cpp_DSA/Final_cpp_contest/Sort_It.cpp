#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    void input()
    {
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
    }
};
bool cmp(Student l, Student r)
{
    if (l.math_marks+l.eng_marks > r.math_marks+r.eng_marks)
    {
        return true;
    }
    else if(l.math_marks+l.eng_marks < r.math_marks+r.eng_marks)
    {
        return false;
    }
    else
    {
        if(l.id<r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
  
}
int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        ar[i].input();
    }
    sort(ar, ar + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i].nm<<" "<<ar[i].cls<<" "<<ar[i].s<<" "<<ar[i].id<<" "<<ar[i].math_marks<<" "<<ar[i].eng_marks<<endl;
    }
    return 0;
}