#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    string sub = "EGYPT";

    size_t pos;
    while ((pos = s.find(sub)) != string::npos) {
        s.replace(pos, sub.length(), " "); // "EGYPT" এর জায়গায় space বসাচ্ছে
    }

    cout << s << '\n';
    return 0;
}
