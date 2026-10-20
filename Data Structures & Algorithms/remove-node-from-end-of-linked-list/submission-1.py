# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:

        size=0
        temp=head
        while temp!=None:

            size+=1
            temp=temp.next
        
        target=size-n
        if target==0:

            todelete=head
            head=head.next
            del todelete
            return head
        
        temp=head
        for k in range(target-1):

            temp=temp.next
        

        todelete=temp.next
        temp.next=todelete.next
        del todelete

        return head
        