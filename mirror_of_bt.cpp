/*   4 
    / \ 
    2 5 
    / \ 
   1  3 
  
is changed to... 
    4 
    / \ 
    5 2 
        / \ 
        3 1 
*/
void mirror(struct Node* node)  
{ 
    if (node == NULL)  
        return;  
    else
    { 
        struct Node* temp; 
          
        /* do the subtrees */
        mirror(node->left);//recursive going to left subtree so that reversing of element can be started from left side bottom and 
        // keep on going on.
  
        mirror(node->right);// then changing element bottom most right children and then root and so on 
      
        /* swap the pointers in this node */
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    } 
}  
  
