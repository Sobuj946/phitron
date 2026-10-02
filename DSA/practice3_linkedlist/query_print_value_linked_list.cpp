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
void insert_at_any_pos(Node *&head, int idx, int val)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    Node *newnode = new Node(val);
    if (idx == 0)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int size_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        int size = size_list(head);
        if (idx < 0 || size < idx)
        {
            cout << "Invalid\n";
        }
        else
        {
            insert_at_any_pos(head, idx, val);
            print_linked_list(head);
        }
    }

    return 0;
}