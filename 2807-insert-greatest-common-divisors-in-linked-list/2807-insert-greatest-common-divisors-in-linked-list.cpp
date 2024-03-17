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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL)return head;
        ListNode* curr = head ->next;
        ListNode* prev = head;
        while(curr){
            ListNode* temp = new ListNode(gcd(curr->val,prev->val),curr);
            prev ->next = temp;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
    private:
    int gcd(int a,int b){
        int res = 1;
        for(int i = 2;i<=min(a,b);i++){
            if(a%i == 0 && b%i == 0)res = i;
        }
        return res;
    }
};