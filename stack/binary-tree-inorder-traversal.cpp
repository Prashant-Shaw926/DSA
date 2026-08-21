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
    void traverseNode(TreeNode* curr, vector<int> &arr) {
        if (!curr)
            return;

        else {
            traverseNode(curr->left, arr);
            arr.push_back(curr->val);
            traverseNode(curr->right, arr);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> result;
        traverseNode(root, result);
        return result;

        // if (root == nullptr) {
        //     return result;
        // }

        // stack<TreeNode*> stack;
        // TreeNode* curr = root;

        // while (curr != nullptr || !stack.empty()) {

        //     while (curr != nullptr) {
        //         stack.push(curr);
        //         curr = curr->left;
        //     }

        //     curr = stack.top();
        //     stack.pop();
        //     result.push_back(curr->val);

        //     curr = curr->right;
        // }

        // return result;
    }
};