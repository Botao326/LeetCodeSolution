//
// Created by botao on 16-12-3.
//

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int sumRec(TreeNode* root, int pre, int sum){
        if (!root) return 0;
        int curVal = pre + root->val;
        return (curVal == sum) + sumRec(root->left, curVal, sum) + sumRec(root->right, curVal, sum);
    }


public:
    int pathSum(TreeNode* root, int sum) {
        if (!root) return 0;
        return sumRec(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};