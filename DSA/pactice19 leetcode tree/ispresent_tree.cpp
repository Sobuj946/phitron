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
Node* input_tree()
{
    int val;
    cin>>val;
    Node*root;
    if(val==-1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(val);
    }
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
        {
            myleft=new Node(l);
        }
        if(r==-1)
        {
            myright=NULL;
        }
        else
        {
            myright=new Node(r);
        }

        //connect
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
bool isNodePresent(Node*root,int x)
{
  
    if(root==NULL)return false;
    if(x==root->val)
    {
        return true;
    }
    bool l=isNodePresent(root->left,x);
    bool r=isNodePresent(root->right,x);
    return l||r;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*root=input_tree();
      int x;
    cin>>x;
    bool flag=isNodePresent(root,x);
    if(flag)
    {
        cout<<"True\n";
    }
    else
    {
        cout<<"False\n";
    }
    
    return 0;
}