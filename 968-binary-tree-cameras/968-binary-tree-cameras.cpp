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
    int numbervaccine=0;
    string helper(TreeNode *root)
    {
        if(root==NULL)
            return "ok";
        
        string left= helper(root->left);
        string right= helper(root->right);
        
        if(left=="want" || right=="want")
        {
            numbervaccine++;
            return "provide";
        }
         
        if(left=="provide" || right=="provide")
        {

            
            return "ok";
        }
        else
            return "want";
        
        
        
    }
    int minCameraCover(TreeNode* root) {
        
        if(helper(root)=="want")
            numbervaccine++;
        
        return numbervaccine;
        
    }
};