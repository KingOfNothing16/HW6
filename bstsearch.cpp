class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        while( root != NULL){
            //Base Case : to end the recursion if root is NULL/ can't be found 
            if(root->val == val)
                return root; 
            if(root->val > val) // check the left subtree first, then right subtree for value
                return searchBST(root->left, val); 
            else 
                return searchBST(root->right, val);
         }
        return NULL;// return NULL for values that are not in the BST 
    } 
};