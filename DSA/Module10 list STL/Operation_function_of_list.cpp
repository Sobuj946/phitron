#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    list<int> l = {1, 2, 3, 3,4,7,6,6,5,5,4, 5, 2, 2, 2, 2, 2, 2, 2};
    l.remove(2);
    cout << "remove 2 of list:";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    // sort accending
    l.sort();
    cout << "sort list accending:";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.sort(greater<int>());
    cout << "sort list decending:";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    //list unique function must be list  sorted order
    l.sort();
    l.unique();
    cout<<"Unique value is :";
        for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    //reverse list 

    l.reverse();
    cout<<"Reverse order of list:";
        for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}