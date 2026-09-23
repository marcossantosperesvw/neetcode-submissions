typedef TreeNode *p_tree;
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr || (root->left == nullptr && root->right == nullptr)) {
            return root;
        }
        p_tree esq = invertTree(root->left);
        p_tree dir = invertTree(root->right);
        p_tree aux = esq;

        root->left= root->right;
        root->right = aux;

        return root;

    }   
};
