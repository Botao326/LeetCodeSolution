//
// Created by Tao on 21/12/2016.
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
#include <stack>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> NodeStack;
        TreeNode *pCurrent = root;

        while(!NodeStack.empty() || pCurrent){
            if (pCurrent){
                NodeStack.push(pCurrent);
                pCurrent = pCurrent->left;
            }
            else{
                TreeNode *pNode = NodeStack.top();
                res.push_back(pNode->val);
                NodeStack.pop();
                pCurrent = pNode->right;
            }
        }
        return res;

    }
};