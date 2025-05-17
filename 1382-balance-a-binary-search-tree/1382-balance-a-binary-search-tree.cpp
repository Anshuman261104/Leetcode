class Solution {
public:
    void iot(TreeNode* root,vector<int> &ans){
        if (root==NULL){return ;}
        iot(root->left,ans);
        ans.push_back(root->val);
        iot(root->right,ans);
    }
    TreeNode* itb(int s, int e, vector<int>&ans){
        if (s>e){return NULL;}
        int mid=(s+e)/2;
        TreeNode* ru=new TreeNode(ans[mid]);
        ru->left=itb(s,mid-1,ans);
        ru->right=itb(mid+1,e,ans);
        return ru;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        iot(root,ans);
        return itb(0,ans.size()-1,ans);
    }
};