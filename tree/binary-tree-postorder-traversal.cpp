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
    void traverseTree(TreeNode* curr, vector<int>& arr) {
        if (!curr)
            return;

        else {
            traverseTree(curr->left, arr);
            traverseTree(curr->right, arr);
            arr.push_back(curr->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traverseTree(root, result);
        return result;

        // if (!root)
        //     return result;

        // stack<TreeNode*> stack;
        // TreeNode* curr = root;
        // TreeNode* prev = nullptr;

        // while (curr != nullptr || !stack.empty()) {

        //     while (curr != nullptr) {
        //         stack.push(curr);
        //         curr = curr->left;
        //     }

        //     curr = stack.top();

        //     if (curr->right == nullptr || curr->right == prev) {
        //         result.push_back(curr->val);
        //         stack.pop();
        //         prev = curr;
        //         curr = nullptr;
        //     } else {
        //         curr = curr->right;
        //     }
        // }

        // return result;
    }
};