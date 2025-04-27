
class Solution {
public:
    void solver(TreeNode* root,int &cnt){
        if(root==NULL) return;
        cnt++;
        solver(root->left,cnt);
        solver(root->right,cnt);
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        int cnt=0;
        solver(root,cnt);
     return cnt;   
    }
};