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
   class cmp{
    
    public:
       bool operator()(ListNode *a, ListNode* b)
       {
        return a->val>b->val;
         }
       
   } ;  
       
  
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        
        priority_queue<ListNode*,vector<ListNode*>,cmp> mheap;
        
        int k=lists.size();
        
        if(k==0)
            return NULL;
       
        
        for(int i=0;i<k;i++)
        {
            if(lists[i]!=NULL)
            {
            
                mheap.push(lists[i]);
            }
            
            
        }
        
        ListNode* head=NULL;
        ListNode *tail=NULL;
        while(mheap.size()>0)
        {
            ListNode *top=mheap.top();
            mheap.pop();
            
            if(top->next!=NULL)
            {
                mheap.push(top->next);
            }
            
            if(head==NULL)
            {
                head=top;
                tail=top;
            }
           else
            {
                tail->next=top;
                tail=top;
                
                
            }
        
        }
        
        return head;
        
        
    }
};