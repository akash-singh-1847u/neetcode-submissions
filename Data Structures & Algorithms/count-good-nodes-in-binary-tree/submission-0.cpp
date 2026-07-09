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
    int goodNodes(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        int res=0;
        q.push({root,INT_MIN});
        while(!q.empty()){
            auto [node,maxvl]=q.front();
            q.pop();
            if(node->val>=maxvl){
                res++;
            }
            if(node->right){
                q.push({node->right,max(maxvl,node->val)});
            }
            if(node->left){
                q.push({node->left,max(maxvl,node->val)});
            }
        }
        return res;
    }
};
