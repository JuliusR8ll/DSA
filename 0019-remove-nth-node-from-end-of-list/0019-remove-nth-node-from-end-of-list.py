# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if(head.next == None):return None
        cnt = 1
        curr = head
        while(cnt <n):
            curr = curr.next
            cnt += 1
        cnt = 1
        temp = head
        prev = None
        while(curr and curr.next):
            prev = temp
            temp = temp.next
            curr = curr.next
            cnt += 1
        if prev:prev.next = temp.next
        else: return temp.next
        return head
