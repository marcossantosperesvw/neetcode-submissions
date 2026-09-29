/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxHeight(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int h1 = maxHeight(root->right) + 1;
        int h2 = maxHeight(root->left) + 1;
        return max(h1, h2);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int h_left = maxHeight(root->left);
        int h_right = maxHeight(root->right);
        int aux = h_left + h_right;

        return max({diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right), aux});
        


    }
};
