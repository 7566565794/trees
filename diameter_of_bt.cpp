int height(Node *node){
    if(node==NULL){
        return 0;
    }
    return 1+max(height(node->left),height(node->right));
}
int diameter(Node* node)
{
   if(node==NULL){
       return 0;
   }
   int l=height(node->left);
   int r=height(node->right);
   int ld=diameter(node->left);
   int rd=diameter(node->right);
   return max(l+r+1,max(ld,rd));
}
