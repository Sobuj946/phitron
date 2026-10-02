#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*left,*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
// Node *input_tree()
// {
//     int val;
//     cin >> val;
//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }
//     queue<Node *> q;
//     if (root)
//     {
//         q.push(root);
//     }
//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();
//         int l, r;
//         Node *myleft, *myright;
//         cin >> l >> r;
//         if (l == -1)
//         {
//             myleft = NULL;
//         }
//         else
//         {
//             myleft = new Node(l);
//         }
//         if (r == -1)
//         {
//             myright = NULL;
//         }
//         else
//         {
//             myright = new Node(r);
//         }
//         p->left = myleft;
//         p->right = myright;
//         if (p->left)
//         {
//             q.push(p->left);
//         }
//         if (p->right)
//         {
//             q.push(p->right);
//         }
//     }
//     return root;
// }
Node*convert_array_to_binary(int a[],int n,int l,int r)
{
    if(l>r)
    {
        return NULL;
    }
    int mid=(l+r)/2;
    Node*root=new Node(a[mid]);
    Node*leftroot=convert_array_to_binary(a,n,l,mid-1);
    Node*rightroot=convert_array_to_binary(a,n,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
}
void level_order_traversal(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*>q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node*f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Node*root=convert_array_to_binary(a,n,0,n-1);
    level_order_traversal(root);
    return 0;
}