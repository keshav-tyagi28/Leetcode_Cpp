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
    int find(vector<int>& inorder,int n,int ele)
    {
        for(int i=0;i<n;i++)
        {
            if(inorder[i]==ele)
                return i;
        }
      
        return -1;
        
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &index,int instart,int inend, int n)
    {       //index by reference needed
        
        if(index>=n || instart>inend)
            return NULL;
        
        int ele=preorder[index++];
        // index++;
        TreeNode *root= new TreeNode(ele);
        int pos=find(inorder,n,ele);
        
        root->left=solve(preorder,inorder,index,instart,pos-1,n);
        root->right=solve(preorder,inorder,index,pos+1,inend,n);

        return root;
        
        
        
        
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n=preorder.size();
        int preindex=0;
        return solve(preorder,inorder,preindex,0,n-1,n);
        
    }
};