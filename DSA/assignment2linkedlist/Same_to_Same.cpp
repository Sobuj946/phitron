#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = tail->next;
    }
}
void check_same_element(Node *head1, Node *head2)
{
    bool flag = false;
    //     for (Node *i = head1; i != NULL; i = i->next)
    // {
    //    for(Node*j=i->next;j!=NULL;j=j->next)
    //    {
    //     if(i->val>j->val)
    //     {
    //         swap(i->val,j->val);
    //     }
    //    }
    // }
    //      for (Node *i = head2; i != NULL; i = i->next)
    // {
    //    for(Node*j=i->next;j!=NULL;j=j->next)
    //    {
    //     if(i->val>j->val)
    //     {
    //         swap(i->val,j->val);
    //     }
    //    }
    // }
    Node*temp1=head1;
    Node*temp2=head2;
  while(temp1!=NULL&&temp2!=NULL)
  {
    if(temp1->val!=temp2->val)
    {
      cout << "NO\n";
      return;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
    if (temp1==NULL&&temp2==NULL)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
Node *head1 = NULL;
        Node *tail1 = NULL;
    while (true)
    {
        
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head1, tail1, val);
    }
     Node *head2 = NULL;

        Node *tail2 = NULL;
    while (true)
    {
       
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val);
    }
    check_same_element(head1, head2);
    return 0;
}