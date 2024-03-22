# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        if head.next == None:return True
        slow,fast = head,head
        while(fast and fast.next):
            fast = fast.next.next
            slow = slow.next
        def reverse(head):
            prev = None
            curr = head
            while curr:
                next = curr.next
                curr.next = prev
                prev = curr
                curr = next
            return prev
        rev = reverse(slow)
        while rev:
            if rev.val != head.val: return False
            rev = rev.next
            head = head.next
        return True