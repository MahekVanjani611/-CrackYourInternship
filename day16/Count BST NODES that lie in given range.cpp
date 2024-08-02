class Solution{
public:
vector<int> inorderR(Node* root){
    vector<int> v;
    inorderTraversal(root,v);
    return v;
    
}
    void inorderTraversal(Node* root,vector<int> &v){
        if(root!=nullptr){
        inorderTraversal(root->left,v);
        v.push_back(root->data);
        inorderTraversal(root->right,v);
        return ;
        }
    }
    int getCount(Node *root, int l, int h)
    {
        // vector<int> v;
        int count=0;
        vector<int> v = inorderR(root);
        for(int j=0;j<v.size();j++){
            if(v[j]<=h && v[j]>=l){
                count++;
            }
        }
        return count;
      // your code goes here   
    }
};
