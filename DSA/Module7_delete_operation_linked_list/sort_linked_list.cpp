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
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=tail->next;
}
void sort_linked_list(Node*head)
{
    for(Node *temp=head;temp->next!=NULL;temp=temp->next)
    {
        for(Node*temp1=temp->next;temp1!=NULL;temp1=temp1->next)
        {
            if(temp->val>temp1->val)
            {
                swap(temp->val,temp1->val);
            }
          
        }
    }
}
void print_linked_list(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<endl;
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
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
        insert_at_tail(head,tail,val);
    }
    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}