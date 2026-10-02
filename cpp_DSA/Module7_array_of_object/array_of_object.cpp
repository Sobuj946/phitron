#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll;
        cin >> a[i].marks;
        cin.ignore();
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<" "<< a[i].roll<<" " << a[i].marks << endl;
    }
    int best_mark=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(best_mark<a[i].marks)
        {
            best_mark=a[i].marks;
        }
    }
    cout<<best_mark<<endl;
    return 0;
}