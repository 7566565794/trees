// problem i dont understand the problem completely
Node * LCA(Node* root ,int n1 ,int n2 )
{
    if (root == NULL) return NULL; 
 
    if (root->data == n1 || root->data == n2) 
        return root; 
    Node *left_lca  = LCA(root->left, n1, n2); 
    Node *right_lca = LCA(root->right, n1, n2); 
    if (left_lca && right_lca)  return root; 
  
    // Otherwise check if left subtree or right subtree is LCA 
    return (left_lca != NULL)? left_lca: right_lca;
}
//utube algorithm also is not getting accepeted all the cases are not getting passed.
