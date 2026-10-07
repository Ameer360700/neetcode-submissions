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
    void reorderList(ListNode* head) {
        
        //first we find the middle
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //2nd half of the linkedlist is reversed
        ListNode*curr=slow->next;
        ListNode*prev=nullptr;
        slow->next=nullptr; //separating the 2nd group from first
        while(curr!=nullptr)
        {
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode*first=head;
        curr=prev;
        while(curr!=nullptr)
        {
            ListNode*temp1=first->next;
            ListNode*temp2=curr->next;
            first->next=curr;
            curr->next=temp1;
            first=temp1;
            curr=temp2;
        }

    }
};
