class Solution {
public:
    int maxDepth(TreeNode* root) {
        //Have to check base case: if root == nullptr, no nodes so return 0
        if( root == nullptr) return 0; 

        //recursion to keep count of the number of nodes in left subtree
        int maxLeft = maxDepth(root->left);
        //recursion to keep count of the number of nodes in right subtree
        int maxRight = maxDepth(root->right); 

        //returning the max of either subtree/ right subtree plus 1 to include the root
        return max(maxLeft, maxRight) + 1; 

    }
};