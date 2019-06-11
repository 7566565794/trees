void iterativePreorder(node *root) 
{ 
   if(root == NULL){
        return ;
    }
    node * curr=root;
    stack <node *>s;
    while(s.empty()==false || curr!=NULL){
        while(curr!=NULL){
            cout<<curr->data<<" ";// only at this line there is a change
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    }
} 
