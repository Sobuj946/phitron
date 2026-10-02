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
        return;
    }
    tail->next=newnode;
    tail=tail->next;

}
void Remove_duplicate_value_of_list(Node*&head)
{
    if(head==NULL)
    {
        return;
    }
    Node*temp=head;
    while(temp!=NULL)
    {
        Node*prev=temp;
        Node*temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp->val==temp1->val)
            {
                Node*del=temp1;
                prev->next=temp1->next;
                temp1=prev->next;
                delete del;
            }
            else
            {
                prev=temp1;
                temp1=temp1->next;
            }
        }
        temp=temp->next;
    }
}
void print_list(Node*head)
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
    Remove_duplicate_value_of_list(head);
    print_list(head);

    
    return 0;
}