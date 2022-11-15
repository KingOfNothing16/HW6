class Solution {
public:

    void inorderHelper(TreeNode* root, vector<int>& vect){
        if ( root == NULL){ //if the root is NULL/empty then just return; no need for left subtree or right subtree
            return; 
        }

        inorderHelper(root->left, vect); // go to the left subtree first 
        vect.push_back(root->val); 
        inorderHelper(root->right, vect); // go to the right subtree next 
    }


    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> aVect;
        inorderHelper(root, aVect);
        return aVect; 
    }
};