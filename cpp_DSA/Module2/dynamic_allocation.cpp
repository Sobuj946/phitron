#include <iostream>
using namespace std;

int *p;

void fun() {
    int n;
    cin >> n;
    p = new int(n);  // heap allocation
    cout << "Fun function: " << *p << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    fun();
    cout << "Main function: " << *p << endl;
    
    delete p;  // free memory
    return 0;
}
