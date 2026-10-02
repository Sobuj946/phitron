#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int n;
    cin >> n;
    Node *root = new Node(n);
    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        auto *it = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            Node *ln = new Node(l);
            it->left = ln;
            if (it->left)
            {
                q.push(it->left);
            }
        }
        if (r != -1)
        {
            Node *rn = new Node(r);
            it->right = rn;
            if (it->right)
            {
                q.push(it->right);
            }
        }
    }
    return root;
}

void getLeftMostNode(Node *root, vector<int> &left)
{
    if (root == NULL)
    {
        return;
    }
    left.push_back(root->val);
    if (root->left)
    {
        getLeftMostNode(root->left, left);
    }
    else if (root->right)
    {
        getLeftMostNode(root->right, left);
    }
}
void getRightMostNode(Node *root, vector<int> &right)
{
    if (root == NULL)
    {
        return;
    }
    right.push_back(root->val);

    if (root->right)
    {
        getRightMostNode(root->right, right);
    }
    else if (root->left)
    {
        getRightMostNode(root->left, right);
    }
}

int main()
{
    Node *root = input_tree();

    vector<int> left, right;
    getLeftMostNode(root->left, left);
    getRightMostNode(root->right, right);

    reverse(left.begin(), left.end());

    for (int val : left)
    {
        cout << val << " ";
    }
    cout << root->val << " ";

    for (int val : right)
    {
        cout << val << " ";
    }

    return 0;
}