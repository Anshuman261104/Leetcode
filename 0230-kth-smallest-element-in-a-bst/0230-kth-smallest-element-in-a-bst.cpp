
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* cur = root;
        int res = root -> val;
        while(cur) {
            if(cur -> left == NULL) {
                k--;
                if(k == 0)  res = cur -> val;   
                cur = cur -> right;
            }
            else {
                TreeNode* pre = cur -> left;
                while(pre -> right && pre -> right != cur) {
                    pre = pre -> right;
                }
                if(pre -> right == NULL) {
                    pre -> right = cur;
                    cur = cur -> left;
                }
                else {
                    pre -> right = NULL;
                    k--;
                    if(k == 0)  res = cur -> val;   
                    cur = cur -> right;
                }
            }
        }
        return res;
    }
};