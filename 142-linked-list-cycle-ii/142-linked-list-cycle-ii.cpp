/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL|| head->next==NULL)
            return NULL;
        ListNode *slow=head;
        ListNode *temp=head;
        ListNode *fast=head;
        int c=0;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            c++;
            if(slow==fast)
            {
               while(temp!=NULL)
        {
          if(temp==slow) 
          {
              return temp;
          }
            temp=temp->next;
            slow=slow->next;
        }
            }   
        }
       
        return NULL;
    }
};