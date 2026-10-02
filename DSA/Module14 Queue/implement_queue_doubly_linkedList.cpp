#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next,*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Myqueue
{
   
    public:
 Node*head=NULL;
    Node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node*newnode=new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=tail->next;

    }
    void pop()
    {
        sz--;
        if(head==NULL)
        {
            cout<<"Queue is empty.\n";
            return;
        }
        Node*del=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }
    void size()
    {
        cout<<"Size is :"<<sz<<endl;
    }
    void front()
    {
        cout<<"Front value is:"<<head->val<<endl;
    }
      void back()
    {
        cout<<"Back value is:"<<tail->val<<endl;
    }
    bool empty()
    {
        return head==NULL;
    }
    void print()
    {
        while(!empty())
        {
            cout<<head->val<<" ";
            head=head->next;
        }
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
 Myqueue q;
 int  n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        q.push(val);

    }
    q.front();
    q.pop();
    q.back();
    q.size();
    q.empty();
    q.print();

    
    return 0;
}