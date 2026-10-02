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
void insert_at_head(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
    newnode->next=head;
    head=newnode;
    }
    
}
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
        tail=tail->next;
    }
}
// void insert_at_any_pos(Node*&head,Node*&tail,int pos,int val)
// {
//     Node*newnode=new Node(val);
//     if(pos==0)
//     {
//         newnode->next=head;
//         head=newnode;
//     }
//     Node*temp=head;
//     for(int i=0;i<pos-1;i++)
//     {
//         temp=temp->next;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
// }
int size_list(Node*head)
{
    int cnt=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void delete_at_pos(Node*&head,Node*&tail,int idx)
{
    if(head==NULL)return;
    int s=size_list(head);
    if(idx < 0 || idx >= s) return;
    if(idx==0)
    {
        Node*del=head;
        head=head->next;
        delete del;
        if(head==NULL)tail=NULL;
        return;
    }
     
    Node*temp=head;
    for(int i=0;i<idx-1;i++)
    {
        temp=temp->next;
    }
   
    Node *del=temp->next;
    temp->next=temp->next->next;
    if(del==tail)tail=temp;
    delete del;
    // Node* del = temp->next;
    // if (del == NULL) return;
    // temp->next = del->next;
    // if (del == tail) tail = temp; 
    // delete del;

}

void print_linked_list(Node*head)
{
    if(head==NULL)return;
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
    int q;
    cin>>q;
    while(q--)
    {
        int n,v;
        cin>>n>>v;
        if(n==0)
        {
            insert_at_head(head,tail,v);
           
        }
        else if(n==1)
        {
            insert_at_tail(head,tail,v);
          

        }
        else if(n==2)
        {
            
            
            delete_at_pos(head,tail,v);
            

        }
         print_linked_list(head);
        cout<<endl;
    }
    
    return 0;
}