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
            arr.push_back(curr->val);
            traverseTree(curr->left, arr);
            traverseTree(curr->right, arr);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traverseTree(root, result);
        return result;

        // if (!root)
        //     return result;

        // stack<TreeNode*> stack;
        // TreeNode* curr = root;

        // while (curr != nullptr || !stack.empty()) {

        //     while (curr != nullptr) {
        //         result.push_back(curr->val); // root will be pushed to ans
        //         stack.push(curr);
        //         curr = curr->left;
        //     }

        //     // curr will be pointing to null after while loop ends
        //     curr = stack.top(); // curr is now pointing to '4'
        //     stack.pop();        // '4' is popped

        //     curr = curr->right;
        // }

        // return result;
    }
};