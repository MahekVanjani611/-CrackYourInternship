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
        preorderRecursive(root, result);
        return result;
    }
    

    void preorderRecursive(TreeNode* root, vector<int>& result) {
        if (root != nullptr) {
            preorderRecursive(root->left, result); 
            result.push_back(root->val); // Visit the root
            // Traverse left subtree
            preorderRecursive(root->right, result); // Traverse right subtree
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>result=inorderTraversal(root);
        return result[k-1];

        
    }
};
