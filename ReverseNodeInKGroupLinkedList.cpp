#include<iostream>
using namespace std;
class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int value){
            this->val=value;
            this->next=NULL;
        }
};
class LinkedList{
    public:
        ListNode* reverseKGroup(ListNode* head,int k){
            ListNode* temp=head;
            int count=0;
            while(count<k){
                if(temp==NULL){
                    return head;

                }
                temp=temp->next;
                count++;
            }

            ListNode* prevNode=reverseKGroup(temp,k);

            temp=head,count=0;
            while(count<k){
                ListNode* next=temp->next;
                temp->next=prevNode;

                prevNode=temp;
                temp=next;
                count++;
            }
            return prevNode;
        }

};
void printList(ListNode*head){
    while(head!=NULL){
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    ListNode* node1 = new ListNode(20);
    ListNode* node2 = new ListNode(30);
    ListNode* node3 = new ListNode(40);
    ListNode* node4 = new ListNode(50);
    ListNode* node5 = new ListNode(60);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    ListNode* head = node1;
    printList(head);

    LinkedList ll;
    int k=2;
    head = ll.reverseKGroup(head,k);

    cout<<k<<": ";
    
    printList(head);

    return 0;
}