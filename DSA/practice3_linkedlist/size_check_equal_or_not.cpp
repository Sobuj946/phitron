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
void insert_tail1(Node *&head,Node*&tail,int val)
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
void insert_tail2(Node *&head,Node*&tail,int val)
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
int size_of_list1(Node*head)
{
    if(head==NULL)
    {
        return 0;
    }
    int count=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int size_of_list2(Node*head)
{
    if(head==NULL)
    {
        return 0;
    }
    int count=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    Node*head1=NULL;
    Node*tail1=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail1(head1,tail1,val);
    }
    Node*head2=NULL;
    Node*tail2=NULL;
    int val1;
        while(true)
    {
        cin>>val1;
        if(val1==-1)
        {
            break;
        }
        insert_tail2(head2,tail2,val1);
    }
    int l1_size=size_of_list1(head1);
    int l2_size=size_of_list2(head2);
    if(l1_size==l2_size)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}