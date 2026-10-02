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
Node* input_tree()
{
    int val;
    cin >> val;
    Node *root;
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
        Node *myleft, *myright;
        int l, r;
        cin >> l >> r;
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
int node_level(Node*root,int x)
{
    queue<pair<Node*,int>>q;
    if(root==NULL)
    {
        return 0;
    }
    if(root)
    {
        q.push({root,1});
    }
    while(!q.empty())
    {
        pair<Node*,int>parent;
        parent=q.front();
          Node*f=parent.first;
        int level=parent.second;
        q.pop();
      
        if(x==f->val)
        {
            return level;
        }
        if(f->left)
        {
            q.push({f->left,level+1});
        }
        if(f->right)
        {
            q.push({f->right,level+1});
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node*root=input_tree();
    int x;
    cin>>x;
    int level=node_level(root,x);
    cout<<level<<endl;

    return 0;
}