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
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=tail->next;
    }
}
void reverse_linked_list(Node*&head,Node*&tail,Node*temp)
{
    if(temp->next==NULL)
    {
        head=temp;
        return;
    }
    reverse_linked_list(head,tail,temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    // cout<<temp->val<<" ";
}
void print_linked_list(Node*&head)
{
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
    reverse_linked_list(head,tail,head);
    print_linked_list(head);
    return 0;
}