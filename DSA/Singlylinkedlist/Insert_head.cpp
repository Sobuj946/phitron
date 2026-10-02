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
void insert_at_first(Node *&head,int val)
{
    Node *newnode=new Node(val);
    newnode->next=head;
    head=newnode;

}
void print_linkedlist(Node *head)
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
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    head->next=a;
    a->next=b;
     insert_at_first(head,100);
     print_linkedlist(head);
    return 0;
}