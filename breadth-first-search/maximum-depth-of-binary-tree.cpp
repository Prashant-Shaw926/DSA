/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    // private:
    //     int maxDept = 0;
    //     int count = 0;

public:
    // int traverseTree(TreeNode* curr) {
    //     if (!curr) {
    //         return 0;
    //     }

    //     else {
    //         return traverseTree(curr->left) && traverseTree(curr->right);
    //     }
    // }
    // int maxDepth(TreeNode* root) { return traverseTree(root); }
    int traverseTree(TreeNode* curr) {
        if (!curr)
            return 0;

        int leftHeight = traverseTree(curr->left);
        int rightHeight = traverseTree(curr->right);
        return 1 + max(leftHeight, rightHeight);
    }
    int maxDepth(TreeNode* root) { return traverseTree(root); }
};