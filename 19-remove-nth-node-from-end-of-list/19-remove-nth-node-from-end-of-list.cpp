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
      /*  if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* temp=head;
        ListNode* trav=head;
        int c=1,tjs=0;
        ListNode* t;
        while(temp!=NULL)
        {
           c++;
           temp=temp->next;  
             
        }
        if(c==n)
        {
           temp = head;

    //2. move head to next of head
    head = head->next; 

    //3. delete temp node
    free(temp); 
        }
        else if(n==1 && c!=n)
        {
            while(trav->next->next!=NULL)
            {
                trav=trav->next;
                }
            trav->next=NULL;
        }
        else 
        {
        int ind=c-n;
       for(int i=2; i<ind; i++)
       {
            trav=trav->next;
        }
            t=trav->next;
        trav->next=t->next;
        delete t;
        }
  
        return head;*/
        ListNode* slow=head;
        ListNode* fast=head;
        int c=n;
        while(c--)
        {
            fast=fast->next;
        }
        if(fast==NULL)
            return head->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};