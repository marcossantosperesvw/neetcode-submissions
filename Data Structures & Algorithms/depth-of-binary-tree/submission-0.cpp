typedef TreeNode *p_tree;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr){
            return 0;

        } else if (root->right == nullptr && root->left == nullptr) {
            return  1;
        }

        int h1 = maxDepth(root->right);
        int h2 = maxDepth(root->left);

        return max(h1, h2) + 1;
        
    }
};
