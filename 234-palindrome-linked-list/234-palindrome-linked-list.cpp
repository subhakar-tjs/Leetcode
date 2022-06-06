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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        string str="";
        while(temp!=NULL)
        {
            str+=temp->val;
            temp=temp->next;
        }
        int s=0,e=str.size()-1;
        while(s<e)
        {
            if(str[s]!=str[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
        
        
    }
};