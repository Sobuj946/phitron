#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arr[4001];
    for(int i=1;i<=a;i++)arr[i]=-1;
    arr[0]=0;
    for (int i = 1; i <= a; i++)
    {
       if(i-b>=0&&arr[i-b]!=-1)
       {
        arr[i]=max(arr[i],arr[i-b]+1);
       }
        if(i-c>=0&&arr[i-c]!=-1)
       {
        arr[i]=max(arr[i],arr[i-c]+1);
       }
        if(i-d>=0&&arr[i-d]!=-1)
       {
        arr[i]=max(arr[i],arr[i-d]+1);
       }
    }

    cout << arr[a] << endl;
    return 0;
}