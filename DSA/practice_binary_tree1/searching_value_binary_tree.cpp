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
bool searching_value_tree(Node*root,int val)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->val==val)
    {
        return true;
    }
    if(root->val>val)
    {
        searching_value_tree(root->left,val);
    }
    else
    {
        searching_value_tree(root->right,val);
    }
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
    int val;
    cin>>val;
    bool f=searching_value_tree(root,val);
    if(f)
    {
        cout<<"Found the value\n";
    }
    else
    {
        cout<<"Not found the value\n";
    }
    level_order_print(root);

    return 0;
}