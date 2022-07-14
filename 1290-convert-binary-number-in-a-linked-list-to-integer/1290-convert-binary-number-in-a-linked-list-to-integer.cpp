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
    int getDecimalValue(ListNode* head) {
        
       vector<int> a;
            int sum = 0;
			//Traversing the linked list and pushing the elements in an array
            while (head != NULL)
            {
                a.push_back(head->val);
                head = head->next;
            }
			//reverse the array and multiply each element of array by power of 2 & add to sum to convert to decimal from binary
            reverse(a.begin(), a.end());
            for (int i = 0;i<a.size();i++)
            {
                // cout << a[i] << " ";
                sum += a[i] *pow(2, i);
            }
            return sum;
        
    }
};