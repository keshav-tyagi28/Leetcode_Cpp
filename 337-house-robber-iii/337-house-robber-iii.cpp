/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    class help{
      public:
        int exclude;
        int include;
        
    };
    
    help helper(TreeNode *root)
    {
        
        if(root==NULL)
        {
            help obj;
            obj.exclude=0;
            obj.include=0;
            return obj;
        }
        help left= helper(root->left);
        help right= helper(root->right);
        
        int root_in= root->val+left.exclude+right.exclude;
        // int max1= max(left.include+right.include,left.exclude+right.exclude);
        // int max2= max(left.include+right.exclude,left.exclude+right.include);
        int max1= max(left.include,left.exclude);
        int max2= max(right.include,right.exclude);

        int root_out= max1+max2;

        
             help obj;
            obj.exclude=root_out;
            obj.include=root_in;
            
        return obj;
        
        
    }
    int rob(TreeNode* root) {
        
        help ans=helper(root);
        return  max(ans.include,ans.exclude);
    }
};