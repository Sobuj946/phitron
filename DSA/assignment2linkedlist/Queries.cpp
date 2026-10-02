#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    if (tail == NULL) {
        tail = head;
    }
}
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}


void delete_at_index(Node*& head, Node*& tail, int idx) {
    if (head == NULL) return;

    if (idx == 0) {
        Node* del = head;
        head = head->next;
        if (head == NULL) tail = NULL; 
        delete del;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (temp == NULL || temp->next == NULL) return;
        temp = temp->next;
    }

    Node* del = temp->next;
    if (del == NULL) return;

    temp->next = del->next;
    if (del == tail) tail = temp;
    delete del;
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    int q;
    cin >> q;
    Node* head = NULL;
    Node* tail = NULL;

    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_at_head(head, tail, v);
        } else if (x == 1) {
            insert_at_tail(head, tail, v);
        } else if (x == 2) {
            delete_at_index(head, tail, v);
        }
        print_list(head);
    }

    return 0;
}
