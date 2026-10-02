#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    list<int> l1 = {2, 3, 4, 5, 6};
    list<int> l2;
    // l2=l1;
    // or
    l2.assign(l1.begin(), l1.end());

    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    // insert head
    cout << "insert at head:";
    l2.push_front(30);
    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    // insert at tail
    cout << "insert at tail:";
    l2.push_back(100);
    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    // delete at tail
    cout << "delete at tail:";
    l2.pop_back();
    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;
    // delete at head
    cout << "delete at head:";
    l2.pop_front();
    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    // insert at any position age oi index pojonto jaite hbe then insert korte hbe
    // going to position
    //  cout<<*next(l2.begin(),3)<<endl;
    //  next(l2.begin(),3);
    cout << "Insert at any position:";
    l2.insert(next(l2.begin(), 3), 100);
    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    // inserted all list in the list
    list<int> l3 = {50, 69, 95};
    cout << "Insert at any position l3:";
    l2.insert(next(l2.begin(), 3), l3.begin(), l3.end());
    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    //vector insert at any position of list

    vector<int>v={88,99,00,75};
    l2.insert(next(l2.begin(),4),v.begin(),v.end());
    cout<<"Inserted vector at 4 position in list:";
     for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}