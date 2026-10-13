/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValidBST(struct TreeNode* root){
    int arr[10000],j=0;
    void Inorder(struct TreeNode* root){
        if(root!=NULL){
            Inorder(root->left);
            arr[j]=root->val;
            j++;
            Inorder(root->right);
        }
    }
    Inorder(root);
    for(int i=0;i<j-1;i++){
        if(arr[i]>=arr[i+1]){
            return false;
        }
    }
    return true;
}

















