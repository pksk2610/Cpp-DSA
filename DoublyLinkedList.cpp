#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this->data;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getLength(Node* head) {
    Node* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node* &tail, Node* &head, int data) {
    Node* temp = new Node(data);
    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int data) {
    Node* temp = new Node(data);
    if (tail == NULL) {
        tail = temp;
        head = temp;
    }
    else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    if (position == 1) {
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head) {
    if (position == 1) {
        Node* temp = head;
        if (temp->next != NULL) {
            temp->next->prev = NULL;
        }
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else {
        Node* curr = head;
        Node* prevNode = NULL;
        int cnt = 1;

        while (cnt < position) {
            prevNode = curr;
            curr = curr->next;
            cnt++;
        }

        prevNode->next = curr->next;
        if (curr->next != NULL) {
            curr->next->prev = prevNode;
        }

        curr->next = NULL;
        curr->prev = NULL;

        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(tail, head, 11);
    print(head);

    insertAtHead(tail, head, 13);
    print(head);

    insertAtHead(tail, head, 8);
    print(head);

    insertAtTail(tail, head, 25);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

    insertAtPosition(tail, head, 7, 102);
    print(head);

    deleteNode(7, head);
    print(head);

    return 0;
}
