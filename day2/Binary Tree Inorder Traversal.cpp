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
};
    
