//please dont go for iterative solution this is the very easy one.
void mirror(Node *node){
  if(node!=NULL){
         mirror(node->left);
         mirror(node->right);
         Node *temp=node->left;
         node->left=node->right;
         node->right=temp;
     }
}
//very easy solution go with recursive one only.
