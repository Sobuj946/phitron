#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_any_pos(Node*&head,int idx,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node*temp=head;
    for(int i=0;i<idx-1;i++)
    {
        temp=temp->next;
    }

    
   newnode->next=temp->next;
    temp->next=newnode;

}
void print_linked_list(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*head=new Node(10);
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    head->next=a;
    a->next=b;
    b->next=c;

    insert_any_pos(head,2,50);
    print_linked_list(head);
    
    return 0;
}