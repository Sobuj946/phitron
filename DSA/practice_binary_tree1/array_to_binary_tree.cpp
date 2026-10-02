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
Node* array_to_binary_tree(vector<int>&v,int l,int r)
{
    if(l>r)
    {
        return NULL;
    }
    int mid=(l+r)/2;
    Node*root=new Node(v[mid]);
    Node*left=array_to_binary_tree(v,l,mid-1);
    Node*right=array_to_binary_tree(v,mid+1,r);
    root->left=left;
    root->right=right;
    return root;
}
void level_order_tree(Node*root)
{
    queue<Node*>q;
    if(root)
        q.push(root);
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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    Node*root=array_to_binary_tree(v,0,n-1);
    level_order_tree(root);
    return 0;
}