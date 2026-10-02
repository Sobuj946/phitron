#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=tail->next;
}
void reverse_print_linked_list(Node*temp)
{
    if(temp==NULL)
    {
        return;
    }
    if(temp==NULL)
    {
        return;
    }
    reverse_print_linked_list(temp->next);
    cout<<temp->val<<" ";
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    reverse_print_linked_list(head);
    
    return 0;
}