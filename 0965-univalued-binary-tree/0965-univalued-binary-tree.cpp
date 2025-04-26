
class Solution {
public:
    void iot(TreeNode* root,bool &x, int y){
        if (root==NULL){return ;}
        iot(root->left,x,y);
        if (root->val!=y){x=false;}
        iot(root->right,x,y);
    }
    bool isUnivalTree(TreeNode* root) {
        bool x=true;
        int y=root->val;
        iot(root,x,y);
        return x;
    }
};