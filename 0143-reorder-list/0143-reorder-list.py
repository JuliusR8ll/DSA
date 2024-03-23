# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        fast,slow = head.next,head
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        sec = slow.next
        slow.next = None
        prev = None
        while sec:
            next = sec.next
            sec.next = prev
            prev = sec
            sec = next
        curr = head
        while prev and curr:
            nxt = curr.next
            temp = prev.next
            curr.next = prev
            prev.next = nxt
            prev = temp
            curr = nxt

            