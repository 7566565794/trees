//recursive way to delete a binary tree
void deleteTree(node* node)  
{  
    if (node == NULL) cout<<"no nodes can be delet";   
  
    /* first delete both subtrees */
    deleteTree(node->left);  
    deleteTree(node->right);  
      
    /* then delete the node */
    cout << "\n Deleting node: " << node->data;  
    free(node);  
}  
//non recursive way to delete a program
void deletebinarytree(Node* node)
{
    if(node==NULL)
        return;
    queue<Node *> q;
    q.push(node);
    while(!q.empty()){
        Node *temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);}
        if(temp->right!=NULL){
            q.push(temp->right);
        }
      free(temp);
    }
}
