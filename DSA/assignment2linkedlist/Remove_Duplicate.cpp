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
void check_duplicate(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        Node *prev = temp;
        Node *temp1 = temp->next;
        while (temp1 != NULL)
        {
            if (temp->val == temp1->val)
            {
                prev->next = temp1->next;
                delete temp1;
                temp1 = prev->next;
            }
            else
            {
                prev = temp1;
                temp1 = temp1->next;
            }
        }
        temp = temp->next;
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    check_duplicate(head);
    print_linked_list(head);

    return 0;
}