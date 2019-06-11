// inorder without recursion
void inOrder(struct Node *root) 
{ 
    if(root == NULL){
        return ;
    }
    struct Node * curr=root;
    stack <struct Node *>s;
    while(s.empty()==false || curr!=NULL){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data;
        curr=curr->right;
    }
}
