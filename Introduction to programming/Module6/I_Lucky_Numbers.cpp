#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a,b;
    a=n%10;
    b=n/10;
    if(a%b==0||b%a==0)
    {
        cout<<"YES\n";
    }
    else cout << "NO\n";
    return 0;
}
