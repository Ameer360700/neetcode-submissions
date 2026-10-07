# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        
        slow=head
        fast=head
        while fast.next and fast.next.next:
            slow=slow.next
            fast=fast.next.next
        curr=slow.next
        prev=None
        slow.next=None
        while curr:
            next=curr.next
            curr.next=prev
            prev=curr
            curr=next
        first=head
        curr=prev
        while(curr):
            temp1=first.next
            temp2=curr.next
            first.next=curr
            curr.next=temp1
            first=temp1
            curr=temp2
            