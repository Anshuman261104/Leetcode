
class Solution {
public:
     vector<int>a;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=NULL){
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            a.push_back(root->val);
        }
        return a;

    }
};