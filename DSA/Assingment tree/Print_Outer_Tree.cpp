#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) {
        this->val = val;
        left = right = NULL;
    }
};

// Build tree from level order
TreeNode* buildTree(vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1) return NULL;
    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* curr = q.front(); q.pop();

        if (i < nodes.size() && nodes[i] != -1) {
            curr->left = new TreeNode(nodes[i]);
            q.push(curr->left);
        }
        i++;

        if (i < nodes.size() && nodes[i] != -1) {
            curr->right = new TreeNode(nodes[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

bool isLeaf(TreeNode* node) {
    return node && !node->left && !node->right;
}

// Add left boundary (excluding leaves)
void addLeftBoundary(TreeNode* node, vector<int>& res) {
    TreeNode* curr = node->left;
    while (curr) {
        if (!isLeaf(curr)) res.push_back(curr->val);
        if (curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

// Add leaves (left to right)
void addLeaves(TreeNode* node, vector<int>& res) {
    if (!node) return;
    if (isLeaf(node)) {
        res.push_back(node->val);
        return;
    }
    addLeaves(node->left, res);
    addLeaves(node->right, res);
}

// Add right boundary (excluding leaves)
void addRightBoundary(TreeNode* node, vector<int>& res) {
    TreeNode* curr = node->right;
    vector<int> temp;
    while (curr) {
        if (!isLeaf(curr)) temp.push_back(curr->val);
        if (curr->right) curr = curr->right;
        else curr = curr->left;
    }
    reverse(temp.begin(), temp.end());
    for (int val : temp) res.push_back(val);
}

int main() {
    vector<int> nodes;
    string line;
    while (getline(cin, line)) {
        if (line.empty()) break;
        stringstream ss(line);
        int val;
        while (ss >> val) nodes.push_back(val);
    }

    TreeNode* root = buildTree(nodes);
    if (!root) return 0;

    vector<int> result;

    // Step 1: left boundary
    addLeftBoundary(root, result);

    // Step 2: leaf nodes
    addLeaves(root, result);

    // Step 3: right boundary
    addRightBoundary(root, result);

    // Step 4: include root in middle if not already (optional)
    result.insert(result.begin() + count(result.begin(), result.end(), root->left ? root->left->val : -1), root->val);

    // Output result
    for (int val : result)
        cout << val << " ";
    cout << "\n";

    return 0;
}
