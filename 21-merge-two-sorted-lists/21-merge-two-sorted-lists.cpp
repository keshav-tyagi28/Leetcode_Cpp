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
        
        if(list1==NULL&&list2==NULL)
            return NULL;
        else if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        
        ListNode* newhead=NULL;
        ListNode* newtail=NULL;
        ListNode* t1=list1;
        ListNode* t2=list2;
        if(t1->val<=t2->val)
        {
            newhead=t1;
            newtail=t1;
            t1=t1->next;

        }
        
        else if(t1->val>t2->val)
        {
            newtail=t2;
            newhead=t2;
            t2=t2->next;
   
        }
        
        while(t1!=  NULL && t2!=NULL)
        {
            if(t1->val<=t2->val)
        {
            
            newtail->next=t1;
              newtail=t1;  
            t1=t1->next;

        }
        
        else if(t1->val>t2->val)
        {
            newtail->next=t2;
            newtail=t2;
            t2=t2->next;
   
        }
            
            
            
        }

        
        while(t1!=NULL)
        {
             newtail->next=t1;
              newtail=t1;  
            t1=t1->next;
        }
        
            
        while(t2!=NULL)
        {
             newtail->next=t2;
              newtail=t2;  
            t2=t2->next;
        }
        
        return newhead;}
        
        
    

        
//         if(list1->val<=list2->val){
            
//             newhead=list1;
//             newhead->next=mergeTwoLists(list1->next,list2);
//         }
//        else if(list1->val>list2->val){
            
//             newhead=list2;
//             newhead->next=mergeTwoLists(list1,list2->next);
//         }
        
//         return newhead;
//     }
};