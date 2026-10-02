#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
long long sum=0;
Node *insert_tree()
{
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
int sumRange_binary_tree(Node*root,int low,int high)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->val>=low&&root->val<=high)
    {
        sum+=root->val;
    }
    sumRange_binary_tree(root->left,low,high);
    sumRange_binary_tree(root->right,low,high);
    return sum;
}
void level_order_print(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout<<p->val<<" ";
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node*root=insert_tree();
    int low,high;
    cin>>low>>high;
    int sum=sumRange_binary_tree(root,low,high);
    cout<<"Sum range is:"<<sum<<endl;
    level_order_print(root);

    return 0;
}