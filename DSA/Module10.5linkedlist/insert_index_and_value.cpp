#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// void insert_at_tail(Node*&head,Node*&tail,int val)
// {
//     Node*newnode=new Node(val);
//     if(head==NULL)
//     {
//         head=tail=newnode;
//     }
//     else
//     {
//         tail->next=newnode;
//         newnode->prev=tail;
//         tail=tail->next;
//     }
// }
void insert_list(Node *&head, Node *&tail, int index, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    if (index == 0)
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newnode;
    }
    else
    {

        tail = newnode;
    }
    temp->next = newnode;
}
int size(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_forward_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_backward_list(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int index, val;
        cin >> index >> val;
        if (index > size(head))
        {
            cout << "Invalid\n";
        }
        else
        {
            insert_list(head, tail, index, val);
            print_forward_list(head);
            print_backward_list(tail);
        }
    }

    return 0;
}