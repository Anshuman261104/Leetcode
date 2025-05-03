
class Solution {
public:
    int rec_func(TreeNode* root){
        if (root == nullptr) return 0; 
        int left_height = rec_func(root->left);
        if (left_height == -1) return -1;
        int right_height = rec_func(root->right);
        if (right_height == -1) return -1;
        if(abs(right_height - left_height) > 1) return -1;
        return max(++right_height, ++left_height);
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        if(rec_func(root) == -1) return false;
        return true;    
    }
};