//
// Created by Tao on 23/12/2016.
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
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;

        stack<TreeNode *> stk;
        stk.push(root);
        while(!stk.empty()) {

            TreeNode *current = stk.top();
            res.push_back(current->val);
            stk.pop();

            if (current->right != NULL) {
                stk.push(current->right);
            }

            if (current->left != NULL){
                stk.push(current->left);
            }
        }
        return res;
    }
    /*
     * void inorderTranverse(TreeNode* node, vector<int> & res){
        if (node == NULL)
            return;

        inorderTranverse(node->left, res);
        res.push_back(node->val);
        inorderTranverse(node->right, res);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;

        inorderTranverse(root, res);

        return res;
     }
     */
};