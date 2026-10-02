#include<bits/stdc++.h>
using namespace std;
class Node{
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
        tail=tail->next;
    }
}
void reverse_doubly_linked_list(Node*&head,Node*&tail)
{
    Node*i;
    Node*j;
    for(i=head,j=tail;i!=j&&j!=i->prev;i=i->next,j=j->prev)
    {
        swap(i->val,j->val);
    }
    Node*temp1=head;
    Node*temp2=tail;
    // while(temp1!=temp2&&temp1->prev!=temp2)
    // {
    //   swap(temp1->val,temp2->val);
    //   temp1=temp1->next;
    //   temp2=temp2->prev; 
    // }
}
void print_linked_list(Node*head)
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
    cout<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    print_linked_list(head);
    reverse_doubly_linked_list(head,tail);
    print_linked_list(head);
    
    return 0;
}