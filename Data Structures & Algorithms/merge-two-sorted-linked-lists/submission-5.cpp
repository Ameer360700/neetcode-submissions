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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode*head1=list1;
        ListNode*head2=list2;
        if(head1==nullptr && head2==nullptr)
        {
            return head1;
        }
        if(head1==nullptr)
        {
            return head2;
        }
        if(head2==nullptr)
        {
            return head1;
        }
        ListNode*temp1=head1;
        ListNode*temp2=head2;
        ListNode dummy;
        ListNode*tracker=&dummy;
        while(temp1!=nullptr && temp2!=nullptr)
        {
              if(temp1->val<=temp2->val)
              {
                  
                  tracker->next=temp1;
                  temp1=temp1->next;
              }
              else
              {
                tracker->next=temp2;
                temp2=temp2->next;
              }
              tracker=tracker->next;
        }
        if(temp1!=nullptr)
        {
            tracker->next=temp1;
        }
        if(temp2!=nullptr)
        {
            tracker->next=temp2;
        }
        return dummy.next;

        
    }
};
