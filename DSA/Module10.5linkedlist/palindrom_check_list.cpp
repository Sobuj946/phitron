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
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=tail->next;
    }
}
bool palindrome_check_list(Node*head,Node*tail)
{
    Node*temp1=head;
    Node*temp2=tail;
    bool flag=true;
    while(temp1!=temp2&&temp2!=temp1->prev)
    {
        if(temp1->val!=temp2->val)
        {
            flag=false;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->prev;
    }
    return flag;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int val;
    Node*head=NULL;
    Node*tail=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    bool flag=palindrome_check_list(head,tail);
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}