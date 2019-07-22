//very simple just do level order tarversal and return the last element that is the temp element.
int deepestNode(Node *root) 
{ 
    queue<Node *> q;
    q.push(root);
    Node *temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    // cout<<"deepest node="<<temp->data<<endl;
    return temp->data;
} 
