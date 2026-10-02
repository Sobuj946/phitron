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
void print_forward(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void print_backward(Node*tail)
{
    Node*temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    Node*head=new Node(19);
    Node*a=new Node(20);
    Node*tail=new Node(30);
    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    
    print_forward(head);
    cout<<endl;
    print_backward(tail);
    return 0;
}