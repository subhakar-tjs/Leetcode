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
//         if(list1==NULL)
//             return list2;
//         else if(list2==NULL)
//             return list1;
//         ListNode *dummy=new ListNode();
//         ListNode *d2=dummy;
//         while(list1!=NULL && list2!=NULL)
//         {
//            if(list1->val<=list2->val)
//            {
//                int v=list1->val;
//                ListNode *node=new ListNode(v);
//               dummy->next=node;
//                list1=list1->next;
                
//            }
//             else if(list1->val>list2->val)
//             {
//                 int v=list2->val;
//                ListNode *node=new ListNode(v);
//                dummy->next=node;
//                list2=list2->next;
              
//             }
           
           
//         }
//         if(list1!=NULL && list2==NULL)
//         {
//             while(list1!=NULL)
//             {
//                 int v=list1->val;
//                 ListNode *node=new ListNode(v);
//                 dummy->next=node;
//                 list1=list1->next;
               
               
//             }
//         }
//         else if(list2!=NULL && list1==NULL)
//         {
//             while(list2!=NULL)
//             {
//                int v=list2->val;
//                ListNode *node=new ListNode(v);
//                 dummy->next=node;
//                list2=list2->next; 
              
//             }
//         }
//         return d2->next;
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        
        ListNode *dummy=new ListNode();
        ListNode *prev=dummy   ;
            ListNode* t1=list1;
        ListNode* t2=list2;
        while(t1!=NULL && t2!=NULL)
        {
          if(t1->val<=t2->val)
          {
              prev->next=t1;
              t1=t1->next;
          }
            else if(t1->val>t2->val)
            {
                prev->next=t2;
                t2=t2->next;
            }
            prev=prev->next;
        }
        prev->next=t1!=NULL?t1:t2;
        return dummy->next;
        
        
        }
};