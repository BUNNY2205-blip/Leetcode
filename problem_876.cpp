#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*start = nullptr;
node*temp;
node*ptr;
void create();
void display();
void middlenode();
int main(){
    int n;
    cout<<"Enter how many elements you want in your linked list::"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        create();
    }
    cout<<"MIDDLE NODE::"<<endl;
    middlenode();
    cout<<"Your linked list is::"<<endl;
    display();
    return 0;
}
void create(){
    int value;
    temp = new node();
    cout<<"Enter the data you want as input in the linked list::"<<endl;
    cin>>value;
    temp->data=value;
    temp->next=nullptr;
    if(start==nullptr){
        start=temp;
    }
    else{
        temp->next=start;
        start=temp;
    }
}
void display(){
    int n;
    if(start==nullptr){
        cout<<"OOPS the list is empty nothing to print::"<<endl;}
        else{
        ptr = start;
        while (ptr != nullptr) {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL\n";
    }

}
//now the function to find the middle of the node using tortoise hare method
void middlenode(){
    node*fast=start->next;
    node*slow=start;
    while(fast!=nullptr){
        fast=fast->next;
        if(fast!=nullptr){
            fast = fast->next;
        }
        slow = slow->next;
    }
    cout<<"The middle node of the given linked list is ::"<<slow->data<<endl;
}
