void reversePrint(Node *root)
{
    if(root==NULL){
        return ;
    }
    queue<Node *> q;
    q.push(root);
    stack<Node *>s;
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        s.push(temp);
    }
    while(!s.empty()){
        cout<<s.top()->data<<" ";
        s.pop();
    }
}
