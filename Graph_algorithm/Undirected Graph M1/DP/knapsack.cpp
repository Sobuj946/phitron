#include <bits/stdc++.h>
using namespace std;
int val[1004];
int weight[1004];
int knapsack(int i, int mx_weight)
{
    if (i < 0 || mx_weight <= 0)
        return 0;
    // duita options
    // 1 )bag e rakhbo 2) bag e rakhbo na
    if (weight[i] <= mx_weight)
    {
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i]; // rakhbo
        int op2 = knapsack(i - 1, mx_weight);                      // rakhbo na
        return max(op1, op2);
    }
    else
    {
        return knapsack(i - 1, mx_weight); // rakhbo na
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, mx_weight;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cin >> mx_weight;
    cout << knapsack(n - 1, mx_weight);
    return 0;
}