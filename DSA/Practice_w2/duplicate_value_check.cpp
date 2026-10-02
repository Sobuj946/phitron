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
void insert_list(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
bool duplicate_check(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp1 = temp->next;
        while (temp1!= NULL)
        {
            if (temp->val == temp1->val)
            {
                return true;
            }
            temp1 = temp1->next;
        }

        temp = temp->next;
    }
    return false;
}
int main()
{
  
    int n;
    cout << "Enter the size of list:";
    cin >> n;
    int val;
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert_list(head, val);
    }
    bool f = duplicate_check(head);
    if (f)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}