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
        ListNode *curr1 = l1 ->next, *curr2 = l2 ->next;
        ListNode *head = new ListNode((l1 ->val + l2 ->val)%10);
        int carry = (l1 ->val + l2 ->val)/10;
        ListNode *curr = head;
        while(curr1 != NULL && curr2 != NULL){
            curr -> next = new ListNode((curr1 ->val + curr2 ->val+carry)%10);
            carry = (curr1 ->val + curr2 ->val+carry)/10;
            curr1 =curr1 ->next;
            curr2 =curr2 ->next;
            curr =curr ->next;
        }
        while(curr1 != NULL){
            curr -> next = new ListNode((curr1 ->val + carry)%10);
            carry = (curr1 ->val + carry)/10;
            curr1 =curr1 ->next;
            curr =curr ->next;
        }
        while(curr2 != NULL){
            curr -> next = new ListNode((curr2 ->val + carry)%10);
            carry = (curr2 ->val + carry)/10;
            curr2 =curr2 ->next;
            curr =curr ->next;
        }
        if(carry != 0){
            curr -> next = new ListNode(carry);
        }
        return head;
    }
};