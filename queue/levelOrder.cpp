#include <iostream>
using namespace std;
#include <vector>
#include <queue>

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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
 };

vector<vector<int>> levelOrder(TreeNode* root) 
{
    vector<vector<int>> res;//二维数组
    if(!root)
    {
        return res;
    }
    /* 以下程序不是空树 */

        queue<TreeNode *> myqueue;
        /* 根结点入队 */
        myqueue.push(root);
        TreeNode *frontNode = NULL;//队列头号元素
        
        /* 每一层结点的数量 */
        int levelSize = 0;
        while(!myqueue.empty())
        {    
            /* 每一层的结点的数组 */
            vector<int> levelVector;

            /* 每一层结点的数量 */
            levelSize  = myqueue.size();

            for(int idx = 0; idx < levelSize; idx++)
            {
                frontNode = myqueue.front();
                levelVector.push_back(frontNode->val);
                myqueue.pop();
                
                if(frontNode->left)
                {
                    myqueue.push(frontNode->left);
                }
                if(frontNode->right)
                {
                    myqueue.push(frontNode->right);
                }
            }
            res.push_back(levelVector);
        }
        return res;
    
}
   