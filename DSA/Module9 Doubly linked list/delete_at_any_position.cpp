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
void delete_at_any_position(Node*&head,int pos)
{
    if(head==NULL)
    {
        return;
    }
    Node*temp=head;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    Node*deleteNode=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete deleteNode;
}
void print_forward(Node*head)
{
    if(head==NULL)return;
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
    print_forward(head);

    delete_at_any_position(head,3);
    delete_at_any_position(head,1);

    print_forward(head);
    
    return 0;
}