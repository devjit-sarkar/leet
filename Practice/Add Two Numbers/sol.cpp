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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int ele = 0;

        ListNode *head = new ListNode();
        ListNode *ptr = head;
        while(l1 != NULL && l2 != NULL){
            ele = (carry+l1->val+l2->val)%10;
            ListNode *newOne = new ListNode(ele);
            ptr->next = newOne;
            carry = (carry+l1->val+l2->val)/10;
            l1 = l1->next;
            l2 = l2->next;
            cout<<ptr->val<<":";
            ptr = newOne;
        }
        // ptr->val = ele;
        if(l1 == NULL && l2 != NULL){
            while(l2 != NULL){
            ele = (carry+l2->val)%10;
            ListNode *newOne = new ListNode(ele);
            ptr->next = newOne;
            carry = (carry+l2->val)/10;
            l2 = l2->next;
            // ptr->val = ele;
            cout<<ptr->val<<"|";
            ptr = newOne;
            }
        }
        if(l2 == NULL && l1 != NULL){
            while(l1 != NULL){
            ele = (carry+l1->val)%10;
            ListNode *newOne = new ListNode(ele);
            ptr->next = newOne;
            carry = (carry+l1->val)/10;
            l1 = l1->next;
            // ptr->val = ele;
            cout<<ptr->val<<",";
            ptr = newOne;
            }
        }
        
        if(carry != 0){
            ListNode *newOne = new ListNode(carry);
            // ptr->val = carry;
            ptr->next = newOne;
            cout<<ptr->val<<"c";
            ptr = newOne;
        }
        

        return head->next;
    }
};