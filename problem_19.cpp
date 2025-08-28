/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp = head;
        ListNode*ptr = head;
        int a=0;
        if(head==nullptr){
            return nullptr;
        }
        while(ptr!=nullptr){
            ptr = ptr->next;
            a++;
        }
        if(n>a){
            return nullptr;
        }
        if(n==a){
            return head->next;
        }
        n = a-n;
        for(int i=1;i<n;i++){
            temp = temp->next;

        }
        temp->next = temp->next->next;
        return head;

    }
};