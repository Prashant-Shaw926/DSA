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
public:
    bool traverseTree(TreeNode* r, TreeNode* s) {
        if (!r || !s)
            return r == s;
        if (r->val != s->val)
            return false;
        else {
            return traverseTree(r->left, s->left) &&
                   traverseTree(r->right, s->right);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) { return traverseTree(p, q); }
};

// optimised

// bool traverseTree(TreeNode* r, TreeNode* s) {
//     if (r == nullptr || s == nullptr)
//         return r == s;

//     if (r->val != s->val)
//         return false;

//     return traverseTree(r->left, s->left) &&
//            traverseTree(r->right, s->right);
// }
// bool isSameTree(TreeNode* p, TreeNode* q) {
//     return traverseTree(p, q);
// }
