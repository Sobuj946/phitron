#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=tail->next;
    }
}
void reverse_double_list(Node*&head,Node*&tail)
{
    if(head==NULL)
    {
        return;
    }
    for(Node*i=head,*j=tail;i!=j&&j!=i->prev;i=i->next,j=j->prev)
    {
        swap(i->val,j->val);
    }
}
void print_list(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int val;
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    reverse_double_list(head,tail);
    print_list(head);
    return 0;
}