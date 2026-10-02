#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  string nm;
  int cls;
  char s;
  int id;
  void input()
  {

    cin >> nm;
    cin >> cls;
    cin >> s;
    cin >> id;
  }
  // void reverse()
  // {

  // }
};

int main()
{

  int n;
  cin >> n;
  Student ar[n];
  for (int i = 0; i < n; i++)
  {
    ar[i].input();
  }
  // for(int i=n-1;i>=0;i++)
  // {
  // ar[i].s=ar[n-i-1].s;
  // }
  for (int i = 0; i < n; i++)
  {
    cout << ar[i].nm << " " << ar[i].cls << " ";
    cout << ar[n - i - 1].s;

    cout << " " << ar[i].id << endl;
  }

  return 0;
}