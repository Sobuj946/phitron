#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int  val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node *&head,int val)
{
    Node *newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    //right now temp node at last node
      temp->next=newnode;
}
void print_linked_list(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    insert_tail(head,299);
    insert_tail(head,2299);
    insert_tail(head,2939);

    print_linked_list(head);
    
    return 0;
}