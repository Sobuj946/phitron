 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int Q;
    cin >> Q;
    
    unordered_map<int, int> countMap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    while (Q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int X;
            cin >> X;
            countMap[X]++;
            minHeap.push(X);
        } 
        else { // type == 2
            // Find the top element that still exists in the array
            while (!minHeap.empty() && countMap[minHeap.top()] == 0) {
                minHeap.pop();
            }
            
            if (minHeap.empty()) {
                cout << "empty\n";
            } else {
                int minVal = minHeap.top();
                cout << minVal << "\n";
                countMap[minVal] = 0; // Remove all occurrences
                // We don't pop from heap here, because same minVal might be already duplicated in heap
                // and we'll remove them in the next type 2 query's cleanup step.
            }
        }
    }
    
    return 0;
}