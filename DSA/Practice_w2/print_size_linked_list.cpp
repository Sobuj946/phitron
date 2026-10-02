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
void insert_val(Node*&head,int val)
{
    Node*a=new Node(val);
    if(head==NULL)
    {
        head=a;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=a;
}
int linked_size(Node*head)
{
    Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Node*head=NULL;
    int val;
    int n;
    cin>>n;
    int i=0;
    while(i<n)
    {
        cin>>val;
        insert_val(head,val);
        i++;
    }
    cout<<linked_size(head)<<endl;
    return 0;
}