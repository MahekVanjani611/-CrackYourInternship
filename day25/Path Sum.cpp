    bool solve(TreeNode* &root, int &targetSum, int sum) {
        if (root == NULL)
            return false;
        sum = sum + root->val;
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum)
                return true;
            else
                return false;
        }
        bool leftAns = solve(root->left, targetSum, sum);
        bool rightAns = solve(root->right, targetSum, sum);
        return leftAns || rightAns;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;
        int sum = 0;
        bool ans = solve(root, targetSum, sum);
        return ans;
    }
