# Validate Binary Search Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `root` of a binary tree,  *determine if it is a valid binary search tree (BST)*.

A  **valid BST**  is defined as follows:

- The left subtree of a node contains only nodes with keys strictly less than the node's key.
- The right subtree of a node contains only nodes with keys strictly greater than the node's key.
- Both the left and right subtrees must also be binary search trees.

 

 **Example 1:** 

```
Input: root = [2,1,3]
Output: true

```

 **Example 2:** 

```
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [1, 104].
- -231 <= Node.val <= 231 - 1

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.2 MB (beats 7.97%)  
**Submitted:** 2026-10-13T15:22:22.201Z  

```c
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


















```

---

[View on LeetCode](https://leetcode.com/problems/validate-binary-search-tree/)