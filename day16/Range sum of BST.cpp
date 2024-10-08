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


class Solution{
public:
vector<int> inorderR(TreeNode* root){
    vector<int> v;
    inorderTraversal(root,v);
    return v;
    
}
    void inorderTraversal(TreeNode* root,vector<int> &v){
        if(root!=nullptr){
        inorderTraversal(root->left,v);
        v.push_back(root->val);
        inorderTraversal(root->right,v);
        return ;
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        
        int count=0;
        vector<int> v = inorderR(root);
        for(int j=0;j<v.size();j++){
            if(v[j]<=high && v[j]>=low){
                count+=v[j];
            }
        }
        return count;
        
    }
};
