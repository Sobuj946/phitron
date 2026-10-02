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
void search_linked_list(Node *head, int x)
{
    Node *temp = head;
    int idx = 0;
    while (temp != NULL)
    {
        if (x == temp->val)
        {
            cout << idx << endl;
            return;
        }

        temp = temp->next;
        idx++;
    }
    cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_tail(head, tail, val);
        }
        int val;
        cin >> val;
        search_linked_list(head, val);
    }
    return 0;
}