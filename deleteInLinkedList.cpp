#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this ->data=data;
            this->next=NULL;
        }

    void printLinkedList(Node* head){
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
void deleteAtBeginning(Node* &head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void deleteAtEnd(Node* &head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if (head->next == NULL) {

        delete head;
        head = NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void deleteAtPosition(Node* &head,int pos){
    if (head == NULL) {
        cout << "List is empty"<<endl;
        return;
    }
    if (pos == 0) {
        deleteAtBeginning(head);
        return;
    }
    Node* temp = head;
    int count = 0;

    while (temp != NULL && count < pos - 1) {

        temp = temp->next;
        count++;
    }
    if(temp==NULL || temp->next==NULL){
        cout<<"Position out of range"<<endl;
        return;
    }
    Node* nodeToDelete=temp->next;
    temp->next=nodeToDelete->next;
    delete nodeToDelete;
}
int main(){
    Node* node1 = new Node(20);
    Node* node2 = new Node(30);
    Node* node3 = new Node(40);
    Node* node4 = new Node(50);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;


    head->printLinkedList(head);

    deleteAtBeginning(head);
    head->printLinkedList(head);

    deleteAtEnd(head);
    head->printLinkedList(head);

    deleteAtPosition(head,1);
    head->printLinkedList(head);
 

    return 0;
}