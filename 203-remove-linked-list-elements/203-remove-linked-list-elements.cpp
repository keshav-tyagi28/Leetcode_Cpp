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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
            return head;
        
        ListNode * cur=head;
        ListNode * prev=NULL;
        
        while(cur!=NULL)
        {
            if(cur->val==val){
            
                if(cur==head)
                {
                    head=head->next;
                    cur=head;
                }
                else{
                    
                    prev->next=cur->next;
                    cur=cur->next;
                    
                }
                
                
            }
            
            else{
                prev=cur;
                cur=cur->next;
            }
            
            
        }

        return head;
        
    }
};