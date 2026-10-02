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
void insert_at_head(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    }
}
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(tail==NULL)
    {
        head=tail=newnode;
    }
    else
    {
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    }
}
void print_forward(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// void print_backward(Node*tail)
// {
//     Node*temp=tail;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->prev;
//     }
//     cout<<endl;
// }
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*c=new Node(40);
    Node*tail=new Node(50);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=tail;
    tail->prev=c;
    insert_at_head(head,tail,100);
    insert_at_tail(head,tail,200);
    print_forward(head);
    // print_backward(tail);


    
    return 0;
}