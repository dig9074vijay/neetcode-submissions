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
void traverse(TreeNode* root, vector<int> &traversal)
        {
            if(root==NULL)
            {
                return;
            }
            traverse(root->left,traversal);
            traversal.push_back(root->val);
            traverse(root->right,traversal);
        }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> traversal;
        traverse(root,traversal);
        return traversal[k-1];
    }
};
