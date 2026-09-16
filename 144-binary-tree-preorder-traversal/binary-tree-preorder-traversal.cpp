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
// class Solution {
// public:
//     vector<int> ans;

//     void preorder(TreeNode* root) {
//         if (root == nullptr)
//             return;

//         ans.push_back(root->val); // Root
//         preorder(root->left);     // Left
//         preorder(root->right);    // Right
//     }

//     vector<int> preorderTraversal(TreeNode* root) {
//         preorder(root);
//         return ans;
//     }
// };














class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> ans;

        if (root == nullptr)
            return ans;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {

            TreeNode* node = st.top();
            st.pop();

            // Root
            ans.push_back(node->val);

            // Right first
            if (node->right != nullptr)
                st.push(node->right);

            // Left second
            if (node->left != nullptr)
                st.push(node->left);
        }

        return ans;
    }
};