void reversePrint(Node *node)
{
   if(node==NULL)
        return;
    queue<Node *> q;
    stack<Node *> s;
    Node * curr=node;
    q.push(curr);
    while(q.empty()==false){
        curr=q.front();
        q.pop();
        s.push(curr);
        if(curr->right!=NULL)
            q.push(curr->right);
        if(curr->left!=NULL)
            q.push(curr->left);
    }
    while(s.empty()==false){
        Node *temp=s.top();
        cout<<temp->data<< " ";
        s.pop();
    }
}
