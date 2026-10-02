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
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = tail->next;
    }
}
void create_a_cycle_linked_list(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
}
void cycle_detect(Node *head, Node *tail)
{
    if (head == NULL)
    {
        return;
    }
    Node *slow = head;
    Node *fast = head;
    bool flag = false;
    while (fast != NULL&&fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Detect cycle the linked list!" << endl;
    }
    else
    {
        cout << "Not Detect cycle the linked list!" << endl;
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
    create_a_cycle_linked_list(head, tail);
    cycle_detect(head, tail);

    return 0;
}