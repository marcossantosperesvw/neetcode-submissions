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
        int h1 = maxHeight(root->right);
        int h2 = maxHeight(root->left);
        return max(h1, h2) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        } 
        int h1 = maxHeight(root->left);
        int h2 = maxHeight(root->right);
        int fb = abs(h1 - h2);
        if (fb > 1) return false;
        return true && isBalanced(root->left) && isBalanced(root->right);
    
    }
};
