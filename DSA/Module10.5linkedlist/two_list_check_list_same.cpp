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
        newnode->prev = tail;
        tail = tail->next;
    }
}
bool check_same_list(Node *head1, Node *tail1, Node *head2, Node *tail2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int cnt1 = 0, cnt2 = 0;
    while (temp1 != NULL)
    {
        cnt1++;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        cnt2++;
        temp2 = temp2->next;
    }
    if (cnt1 != cnt2)
    {
        return false;
    }
    temp1 = head1;
    temp2 = head2;
    bool flag = true;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int val;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }
    int val1;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val1);
    }
    bool flag = check_same_list(head1, tail1, head2, tail2);
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}