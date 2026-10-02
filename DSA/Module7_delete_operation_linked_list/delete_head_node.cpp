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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = tail->next;
    }
}
void delete_at_head(Node *&head)
{
    Node *deleteNode;
    if (head == NULL)
    {
        return;
    }
    deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void print_linked_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_at_head(head);
    print_linked_list(head);
    return 0;
}