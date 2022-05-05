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
   void inserttail(ListNode *&newh, ListNode *&newt, int digit)
    {
        if(newh==NULL){
            ListNode *newnode=new ListNode(digit);
            newt=newnode;
            newh=newnode;
        }
        else
        {
         ListNode *newnode=new ListNode(digit);
         newt->next=newnode;
         newt=newnode;
            
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* tmp1=l1;
        ListNode* tmp2=l2;
        int carry=0;
        
        ListNode *newh=NULL;
        ListNode *newt=NULL;

        while(tmp1!=NULL&&tmp2!=NULL)
        {
            int sum=tmp1->val+tmp2->val+carry;
            int digit=sum%10;
        
            inserttail(newh,newt,digit);
            
                carry=sum/10;
            tmp1=tmp1->next;
            tmp2=tmp2->next;   
        }
        while(tmp1!=NULL)
        {
            int sum=tmp1->val+carry;
            int digit=sum%10;
            inserttail(newh,newt,digit);
            carry=sum/10;
            tmp1=tmp1->next;
            
        }
          while(tmp2!=NULL)
        {
           int sum=tmp2->val+carry;
            int digit=sum%10;
            inserttail(newh,newt,digit);
            carry=sum/10;
            tmp2=tmp2->next;
            
        }
        if(carry!=0)
        { 
            inserttail(newh,newt,carry);
            
        }
        
        return newh;
        
    }
};