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

#include <stack>
class Solution {
public:
    bool traverseTree(TreeNode* leftSide, TreeNode* rightSide) {
        if (!leftSide || !rightSide)
            return leftSide == rightSide;

        if (leftSide->val != rightSide->val)
            return false;
        else {
            return traverseTree(leftSide->left, rightSide->right) &&
                   traverseTree(leftSide->right, rightSide->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        // if (!root)
        //     return true;
        // else
        //     return traverseTree(root->left, root->right);
        return (!root) || traverseTree(root->left, root->right);
    }
};