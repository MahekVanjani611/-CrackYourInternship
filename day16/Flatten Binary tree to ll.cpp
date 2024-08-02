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
vector<int> preorderR(TreeNode* root){
    vector<int> v;
    preorderTraversal(root,v);
    return v;
    
}
    void preorderTraversal(TreeNode* root,vector<int> &v){
        if(root!=nullptr){
             v.push_back(root->val);
     preorderTraversal(root->left, v);
            preorderTraversal(root->right, v);
        return ;
        }
    }
    void flatten(TreeNode* root) {
        vector<int>v = preorderR(root);
        TreeNode* temp=root;
        for(int i=1;i<v.size();i++){
            temp->right=new TreeNode(v[i]);
            
            temp=temp->right;

           
        }
        while (root) {
            root->left = nullptr;
            root = root->right;
        }

        
    }
};
