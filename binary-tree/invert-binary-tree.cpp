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
#include <bits/stdc++.h>
class Solution {
public:
    void traverseTree(TreeNode* curr) {
        if (!curr)
            return;

        traverseTree(curr->left);
        traverseTree(curr->right);

        swap(curr->left, curr->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        traverseTree(root);
        return root;
    }
};