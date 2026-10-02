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
        Node*myleft,*myright;
        int l,r;
        cin>>l>>r;
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
bool special_tree(Node*root)
{
    if(root==NULL)
    {
        return true;
    }
    if((root->left!=NULL&&root->right==NULL)||(root->left==NULL&&root->right!=NULL))
    {
        return false;
    }
    bool l=special_tree(root->left);
    bool r=special_tree(root->right);
    return l&&r;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*root=input_tree();
    bool flag=special_tree(root);
    if(flag)
    {
        cout<<"This tree is special\n";
    }
    else
    {
        cout<<"This tree is not special\n";
    }
    return 0;
}