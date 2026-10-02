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
bool ascending_check(Node *head)
{
    Node *temp = head;
    while (temp != NULL&&temp->next!=NULL)
    {
      
        if(temp->val>temp->next->val)
        {
            return false;
        }

        temp = temp->next;
    }
    return true;
}
int main()
{
    //  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    // cout << "Enter the list size:";
    cin >> n;
    int val;
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert_list(head, val);
    }
    bool flag = ascending_check(head);
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