#include <bits/stdc++.h>
using namespace std;
int size1 = 0, size2 = 0;

class Node
{
public:
    int val;
    Node *next, *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Mystack1
{
public:
    Node *head1= NULL;
    Node *tais = NULL;
    void push(Node*&head1,Node*&tais,int val)
    {
        Node *newnode = new Node(val);
        if (head1 == NULL)
        {
            head1 = tais = newnode;
        }
        else
        {
            tais->next = newnode;
            newnode->prev = tais;
            tais= newnode;
        }
        size1++;
    }
    void pop()
    {
        if (head1 == NULL)
            return;
        Node *del = tais;
        tais = tais->prev;
        delete del;
        if (tais == NULL)
        {
            head1 = NULL;
            return;
        }
        tais->next = NULL;
        size1--;
    }
};
class Mystack2
{
public:

    void push(Node*&head2,Node*&taiq,int val)
    {
        Node *newnode = new Node(val);
        if (head2 == NULL)
        {
            head2 = taiq= newnode;
        }
        else
        {
            taiq->next = newnode;
            newnode->prev = taiq;
            taiq = newnode;
        }
        size2++;
    }
    void pop(Node*&head2,Node*&taiq)
    {
        if (head2 == NULL)
            return;
        Node *del = taiq;
        taiq = taiq->prev;
        delete del;
        if (taiq == NULL)
        {
            head2 = NULL;
            return;
        }
        taiq->next = NULL;
        size2--;
    }
};
bool check_equal(Node*head1,Node*head2)
{
    if (size1 != size2)
    {
        return false;
    }
    bool flag = true;
    Node *temp1 = head1;
    Node*temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = false;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tais = NULL;
    Node *taiq = NULL;
    int n1,n2;
    cin >> n1;
    int vas, vaq;
    Mystack1 s1;
    Mystack2 s2;
    for (int i = 0; i < n1; i++)
    {
        cin >> vas;
        s1.push(head1,tais,vas);
    }
    cin>>n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> vaq;
        s2.push(head2,taiq,vaq);
    }
    bool flag=check_equal(head1,head2);
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}