#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data=value;
            next=NULL;
        }
};

void insertionAtBeginning(Node* &head,int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}

void insertionAtEnd(Node* &head,int value ){
    Node* newNode=new Node(value);

    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertionAtPosition(Node* &head,int pos,int value){
    if(pos<=0){
        cout<<"Invalid Postion"<<endl;
        return;
    }
    if (pos == 1) {
        insertionAtBeginning(head, value);
        return;
    
    }
    Node* newNode=new Node(value);
    Node*temp=head;

    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Postion out of range!"<<endl;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void printList(Node* head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    int choice;
    while(true){
        cout << "\n--- Linked List Menu ---" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Position" << endl;
        cout << "4. Print List" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        
        if (choice == 1) {
            int value;
            cout << "Enter value: ";
            cin >> value;
            insertionAtBeginning(head, value);
        }
        else if (choice == 2) {
            int value;
            cout << "Enter value: ";
            cin >> value;
            insertionAtEnd(head, value);
        }
        else if (choice == 3) {
            int value, pos;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;
            insertionAtPosition(head, pos, value);
        }
        else if (choice == 4) {
            printList(head);
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }

    }
    return 0;
}