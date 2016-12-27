//
// Created by botao on 16-12-25.
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
using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> NodeStack;
        TreeNode* pCurrent = root;
        while(pCurrent || !NodeStack.empty()){
            while(pCurrent){
                NodeStack.push(pCurrent);
                pCurrent = pCurrent->left;
            }

            pCurrent = NodeStack.top();
            if (--k == 0)
                return pCurrent->val;
            NodeStack.pop();
            pCurrent = pCurrent->right;
        }
        return 0;
    }
};