class Solution {
public:
    void pot(TreeNode* root,vector<int> &ans){
        if (root==NULL){return ;}
        pot(root->left,ans);
        ans.push_back(root->val);
        pot(root->right,ans);
    }
    int ui (int a, vector<int>ans){
        int i=0,s=0;
        while (ans[i]!=a){i++;}
        while (i<ans.size()){s+=ans[i];i++;}
        return s;
    }
    void po(TreeNode* root,vector<int>ans){
        if (root==NULL){return ;}
        root->val=(ui(root->val,ans));
        po(root->left,ans);
        po(root->right,ans);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>ans;
        pot(root,ans);
        po(root,ans);
        return root;
    }
};