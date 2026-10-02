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
    tail->next = newnode;
    tail = tail->next;
}
int max_value_linked_list(Node *head, Node *tail)
{
    if (head == tail)
    {
        return head->val;
    }

    else
    {

        int mx = INT_MIN;
        Node *temp = head;

        while (temp != NULL)
        {
            if (mx < temp->val)
            {
                mx = temp->val;
            }
            temp = temp->next;
        }

        return mx;
    }
}
int min_value_linked_list(Node *head, Node *tail)
{
    if (head == tail)
    {
        return head->val;
    }
    else
    {
        int mn = INT_MAX;

        Node *temp = head;
        while (temp != NULL)
        {
            if (mn > temp->val)
            {
                mn = temp->val;
            }
            temp = temp->next;
        }

        return mn;
    }
}
// int size_linked_list(Node*head)
// {
//     if(head==NULL)
//     {
//         return 0;
//     }
//     int count=0;
//         Node*temp=head;
//         while(temp!=NULL)
//         {
//             count++;
//             temp=temp->next;
//         }
//     return count;
// }
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
        insert_tail(head, tail, val);
    }
    // // cout<<size_linked_list(head)<<endl;
    // if(size_linked_list(head)==1)
    // {
    //     cout<<0<<endl;
    // }
    // else
    // {
    int mx = max_value_linked_list(head, tail);
    int mn = min_value_linked_list(head, tail);
    cout << mx - mn << endl;
    // }

    return 0;
}