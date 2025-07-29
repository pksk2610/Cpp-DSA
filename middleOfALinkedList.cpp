#include<iostream>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode* next;

        ListNode(int value){
            val=value;
            next=NULL;
        }
    
};
void insertAtEnd(ListNode* &head,int value){
    ListNode* newNode=new ListNode(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    ListNode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

class LinkedList{
    public:
        ListNode* middleNode(ListNode* head){
            ListNode* slow=head;
            ListNode* fast=head;

            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            return slow;
        }
};
void printList(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    ListNode* head=NULL;
    int n,value;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        insertAtEnd(head,value);
    }

    printList(head);

    LinkedList obj;
    ListNode* mid = obj.middleNode(head);
    cout<<mid->val<<endl;


    return 0;
}