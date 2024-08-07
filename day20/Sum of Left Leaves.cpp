class Solution {
public:

    int solve(TreeNode *root,int t){

        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL){
            return t == 0 ? root->val : 0;
        }
        return solve(root->left,0) + solve(root->right,1);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root,-1);
    }
};
