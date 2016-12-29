//
// Created by botao on 16-12-29.
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
#include<stack>
using namespace std;

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string restr;
        if(!root) return restr;

        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode *pCurrent = stk.top();
            stk.pop();
            restr += to_string(pCurrent->val) + ",";
            if (pCurrent->right) stk.push(pCurrent->right);
            if (pCurrent->left) stk.push(pCurrent->left);
        }
        return restr.substr(0, restr.size()-1);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0) return nullptr;

        int id = 0;
        int r = id;
        while(isdigit(data[r])) r++;
        int v = stoi(data.substr(id, r-id));
        id = r+1;

        TreeNode * root = new TreeNode(v);
        stack<TreeNode*> stk;
        stk.push(root);

        while(id < (int) data.size()){
            int r = id;
            while(isdigit(data[r]))r++;
            int v = stoi(data.substr(id, r-id));
            id = r + 1;

            TreeNode *node = nullptr;
            while(!stk.empty() && v > stk.top()->val){
                node = stk.top();
                stk.pop();
            }
            if(node){
                node->right = new TreeNode(v);
                stk.push(node->right);
            }
            else {
                stk.top()->left = new TreeNode(v);
                stk.push(stk.top()->left);
            }
        }

        return root;
    }

    void f(TreeNode *root){
        if (!root) return;
        f(root->left);
        cout<< root->val << ", ";
        f(root->right);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));