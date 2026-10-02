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

class Myqueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        if (head == NULL)
        {
            return;
        }
        Node *del = head;
        cout << "delete Node:" << del->val << " ";
        head = del->next;
        delete del;
    }
    void print()
    {
        cout<<"Print all value:";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    void front()
    {
        cout << "Front value:" << head->val << " " << endl;
        
    }
    void back()
    {
        cout << "Back value:" << tail->val << " " << endl;
    }
    void size()
    {
        cout << "size of queue is:" << sz << endl;
    }
    void empty()
    {
        if(head==NULL)
        {
            cout<<"Empty queue\n";
        }
        else
        {
            cout<<"Not empty this queue\n";
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Myqueue q;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        q.push(val);
    }
    q.print();
    cout << endl;
    q.pop();
    cout << endl;
    q.print();
    cout<<endl;
    q.size();
    q.front();
    q.back();
    q.empty();

    return 0;
}