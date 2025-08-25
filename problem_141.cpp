// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node*next;
// };
// node*start = nullptr;
// node*temp;
// node*ptr;
// void create();
// void display();
// int main(){
//     int n;
//     cout<<"Enter how many elements you want in your linked list::"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         create();
//     }
//     cout<<"Your linked list is::"<<endl;
//     display();
//     return 0;
// }
// void create(){
//     int value;
//     temp = new node();
//     cout<<"Enter the data you want as input in the linked list::"<<endl;
//     cin>>value;
//     temp->data=value;
//     temp->next=nullptr;
//     if(start==nullptr){
//         start=temp;
//     }
//     else{
//         temp->next=start;
//         start=temp;
//     }
// }
// void display(){
//     int n;
//     if(start==nullptr){
//         cout<<"OOPS the list is empty nothing to print::"<<endl;}
//         else{
//         ptr = start;
//         while (ptr != nullptr) {
//             cout << ptr->data << " -> ";
//             ptr = ptr->next;
//         }
//         cout << "NULL\n";
//     }

// }

//code for linked list cycle
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr){
            return false;
        }
        ListNode*fast = head->next;
        ListNode*slow = head;
        while(fast!=nullptr){
            fast = fast->next;
            if(fast!=nullptr){
                fast=fast->next;
            }
            slow = slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;

    }
};