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
    bool isPalindrome(ListNode* head) {
        //find middle
        ListNode* slow=head;
        ListNode* fast = head;
        while (fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

       ListNode* curr;

        if (fast == NULL)
            curr = slow;          
        else
            curr = slow->next; 

        
        
        // reverse half node
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        //compare both the nodes 
        while(prev!=NULL){
            if(prev->val!=head->val){
                return false;
            }
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};