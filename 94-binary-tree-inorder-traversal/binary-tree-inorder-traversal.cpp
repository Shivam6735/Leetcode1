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

//     void inorder(TreeNode* root) {
//         if (root == nullptr)
//             return;

//         inorder(root->left);      // Left
//         ans.push_back(root->val); // Root
//         inorder(root->right);     // Right
//     }

//     vector<int> inorderTraversal(TreeNode* root) {
//         inorder(root);
//         return ans;
//     }
// };












// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {

//         if (root == nullptr)
//             return {};

//         vector<int> ans;

//         vector<int> left = inorderTraversal(root->left);

//         for (int x : left)
//             ans.push_back(x);

//         ans.push_back(root->val);

//         vector<int> right = inorderTraversal(root->right);

//         for (int x : right)
//             ans.push_back(x);

//         return ans;
//     }
// };













class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;
        stack<TreeNode*> st;

        while (root != nullptr || !st.empty()) {

            // Go as left as possible
            while (root != nullptr) {
                st.push(root);
                root = root->left;
            }

            // Process node
            root = st.top();
            st.pop();

            ans.push_back(root->val);

            // Move to right subtree
            root = root->right;
        }

        return ans;
    }
};