#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int current = v.size()-1;
    while (current != 0)
    {
        int parent = (current - 1) / 2;
        if (v[parent] < v[current])
            swap(v[parent], v[current]);
        else
            break;

        current = parent;
    }
}
void print_heap(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
}
void delete_max_heap(vector<int> &v)
{
    v[0] = v.back();
    v.pop_back();
    int current = 0;
    while (true)
    {
        int left = current * 2 + 1;
        int right = current * 2 + 2;
        int left_val, right_val;
        right_val = INT_MIN;
        left_val = INT_MIN;
        if (left < v.size())
        {
            left_val = v[left];
        }
        if (right < v.size())
        {
            right_val = v[right];
        }
        if (left_val > right_val && left_val > v[current])
        {
            swap(v[current], v[left]);
            current = left;
        }
        else if (left_val < right_val && right_val > v[current])
        {

            swap(v[current], v[right]);
            current = right;
        }
        else
            break;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    cout<<endl;
    delete_max_heap(v);
  
    print_heap(v);
      cout<<endl;
        delete_max_heap(v);
  
    print_heap(v);
      cout<<endl;

    return 0;
}