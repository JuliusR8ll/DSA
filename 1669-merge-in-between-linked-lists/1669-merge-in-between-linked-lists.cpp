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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;
        int dis = b-a;
        while(--a){
            curr = curr -> next;
        }
        ListNode* d = curr->next;
        while(dis--){
            d = d->next;
        }
        ListNode* j = d ->next;
        d -> next = NULL;
        curr -> next = list2;
        while(curr->next){
            curr = curr -> next;
        }
        curr ->next = j;
        return list1;
    }
};