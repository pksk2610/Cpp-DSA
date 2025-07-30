#include<iostream>
#include<map>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d) {
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    } else {
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value) {
    if(tail == NULL) {
        cout << "List is empty, please check again" << endl;
        return;
    } else {
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if(curr == prev) {
            tail = NULL;
        } else if(tail == curr) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node* tail) {
    if(tail == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    Node* temp = tail;
    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while(tail != temp);
    cout << endl;
}

bool isCircularList(Node* head) {
    if(head == NULL) return true;

    Node* temp = head->next;
    while(temp != NULL && temp != head) {
        temp = temp->next;
    }

    return temp == head;
}

bool detectLoop(Node* head) {
    if(head == NULL) return false;

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp != NULL) {
        if(visited[temp]) return true;
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* tail = NULL;

    insertNode(tail, 5, 3);  // first node
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    if(isCircularList(tail)) {
        cout << "Linked List is Circular in nature" << endl;
    } else {
        cout << "Linked List is not Circular" << endl;
    }

    Node* head = tail ? tail->next : NULL;

    if(detectLoop(head)) {
        cout << "Loop detected" << endl;
    } else {
        cout << "No Loop detected" << endl;
    }

    return 0;
}
