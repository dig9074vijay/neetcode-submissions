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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL && q!=NULL) return false;
        if(p!=NULL && q==NULL) return false;
        if(p->val!=q->val)
        {
            return false;
        }

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0;i<size;i++)
            {
                TreeNode* top = q.front();
                q.pop();
                if(top->val==subRoot->val) {
                    bool result = isSameTree(top,subRoot);
                    if(result) return result;
                }
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            cout<<endl;
        }
        return false;
    }
};
