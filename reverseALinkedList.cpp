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
class LinkedList{
    public:
        ListNode* reverseList(ListNode* head){
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode* next=NULL;

            
                while(curr!=NULL){
                    next=curr->next;
                    curr->next=prev;
                    prev=curr;
                    curr=next;
                }
                return prev;
            
        }

};

void printList(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }

    cout<<endl;
}
int main(){
    ListNode* node1 = new ListNode(20);
    ListNode* node2 = new ListNode(30);
    ListNode* node3 = new ListNode(40);
    ListNode* node4 = new ListNode(50);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    ListNode* head = node1;
    printList(head);

    LinkedList ll;
    head = ll.reverseList(head);
    
    printList(head);

    return 0;
}