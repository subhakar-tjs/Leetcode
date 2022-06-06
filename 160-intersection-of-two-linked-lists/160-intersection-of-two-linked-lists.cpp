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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* h1=headA;
        
        ListNode* h2=headB;
        set<ListNode*> s;
        
        
        while(h1!=NULL)
        {
          s.insert(h1);
            h1=h1->next;
        }
        while(h2!=NULL)
        {
            if(s.find(h2)!=s.end()) return h2;
          s.insert(h2);
            h2=h2->next;
        }
        return NULL;
    }
};