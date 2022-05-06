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
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
        {
            if(n>=1)
                return NULL;
        }
        ListNode *tmp=head;
        int count=0;
        while(tmp!=NULL)
        {
            count++;
            tmp=tmp->next;
            
        }
       
        if(count==n){
            head=head->next;
        }
        
//         else if(n==1)
//         {
//             tmp=head;
//             int i=1;
//             while(i<count-1)
//             {
//                 tmp=tmp->next;
//                 i++;
//             }
//             tmp->next=NULL;
          
        
//         }
         else
        {
            tmp=head;
            int i=1;
            while(i<count-n)
            {
                tmp=tmp->next;
                i++;
            }
            tmp->next=tmp->next->next;
          
        
        }
        
          return head;
        
    }
};