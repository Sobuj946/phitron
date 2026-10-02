#include <bits/stdc++.h>
using namespace std;

void shift_zero(int n, vector<int> &a)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 0)
        {
            a[count] = a[i];
            count++;
        }
    }
    while (count < n)
    {
        a[count] = 0;
        count++;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    shift_zero(n, a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}