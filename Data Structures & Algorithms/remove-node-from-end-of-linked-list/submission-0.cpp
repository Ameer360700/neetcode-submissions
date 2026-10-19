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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

           ListNode*temp=head;
           int size=0;
           while(temp!=nullptr)
           {
              size++;
              temp=temp->next;
           }
           int target=size-n;
           if(target==0)
           {
               ListNode*todelete=head;
               head=head->next;
               delete todelete;
               return head;
           }
           temp=head;
           for(int k=0;k<target-1;k++)// just before the target
           {
               temp=temp->next;
           }
           ListNode*todelete=temp->next;
           temp->next=todelete->next;
           delete todelete;
           return head;

        
    }
};
