#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int sz = 0;

void print_list(Node*head,Node*tail) {
    
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    
    cout << "R -> ";
    temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_index(Node*&head,Node*&tail,int index, int val) {
    if (index < 0 || index > sz) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newnode = new Node(val);

    if (sz == 0) { 
        head = tail = newnode;
    }
    else if (index == 0) { 
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else if (index == sz) { 
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    else {
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }

    sz++;
    print_list(head,tail);
}

void delete_list(Node*&head,Node*&tail) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = NULL;
    sz = 0;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;
        insert_at_index(head,tail,x, v);
    }

    delete_list(head,tail);
    return 0;
}