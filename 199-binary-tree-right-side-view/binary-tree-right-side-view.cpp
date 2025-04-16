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
    void levelorder(TreeNode *root, int level, int &maxlevel, vector<int> &result){
        if(root == NULL) return;
        if(level > maxlevel){
            result.push_back(root->val);
            maxlevel = level;
        }
        levelorder(root->right,level + 1, maxlevel, result);
        levelorder(root->left,level + 1, maxlevel, result);
    }
    vector<int> rightSideView(TreeNode *root) {
        // code here
        vector<int> result;
        int maxlevel = 0;
        levelorder(root, 1 , maxlevel, result);
        return result;
    }
};