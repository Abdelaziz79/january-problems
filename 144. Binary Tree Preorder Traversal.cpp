class Solution {
public:

    void pre(TreeNode* root,vector<int>& res){
        if(root==NULL){
            return;
        }
        res.push_back(root->val);
        pre(root->left,res);
        pre(root->right,res);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        pre(root,res);    
        return res;
    }
};

