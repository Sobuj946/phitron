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
Node*input_tree()
{
    int val;
    cin>>val;
    Node*root;
    if(val==-1)
    {
        root=NULL;
    }
    else root=new Node(val);
    queue<Node*>q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node*p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node*myleft,*myright;
        if(l==-1)
        {
            myleft=NULL;
        }
        else
            myleft=new Node(l);
         if(r==-1)
        {
            myright=NULL;
        }
        else
            myright=new Node(r);

        p->left=myleft;
        p->right=myright;

        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
void level_order(Node*root,int x)
{
    vector<int>v;
    bool fre[100000]={false};
    if(root==NULL)
    {
        return;
    }
    queue<pair<Node*,int>>q;
    if(root)
    {
        q.push({root,0});
    }
    while(!q.empty())
    {
        pair<Node*,int>parent;
        parent=q.front();
        q.pop();
        Node*node=parent.first;
        int level=parent.second;
        if(x==level)
        {
            v.push_back(node->val);
            fre[x]=true;
        }
        if(node->left)
        {
            q.push({node->left,level+1});
        }
        if(node->right)
        {
            q.push({node->right,level+1});
        }
    }
    if(v.size()>0)
    {
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    }
    else
    {
        cout<<"Invalid\n";
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*root=input_tree();
    int x;
    cin>>x;
    level_order(root,x);
    
    return 0;
}