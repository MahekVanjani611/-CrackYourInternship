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
vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderRecursive(root, result);
        return result;
    }
    

    void inorderRecursive(TreeNode* root, vector<int>& result) {
        if (root != nullptr) {
            inorderRecursive(root->left, result); 
            result.push_back(root->val); // Visit the root
            // Traverse left subtree
            inorderRecursive(root->right, result); // Traverse right subtree
        }
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>res=inorderTraversal(root);
        int diff=INT_MAX;
        for(int i=1;i<res.size();i++){
            
                diff=min(diff,res[i]-res[i-1]);
            
        }
        return diff;

    }
};
