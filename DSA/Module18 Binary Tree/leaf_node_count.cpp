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
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        Node*p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node*myleft,*myright;
        if(l==-1)myleft=NULL;
        else myleft=new Node(l);
        if(r==-1)myright=NULL;
        else myright=new Node(r);

        //connection
        p->left=myleft;
        p->right=myright;

        //push child node in queue
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
int count_leaf_node(Node*root)
{
    if(root==NULL)return 0;

    if(root->left==NULL&&root->right==NULL)
    return 1;
    int l=count_leaf_node(root->left);
    int r=count_leaf_node(root->right);
    return l+r;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*root=input_tree();
    int cnt=count_leaf_node(root);
    cout<<cnt<<endl;
    
    return 0;
}