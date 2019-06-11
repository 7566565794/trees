void postOrderIterative(Node* root) 
{ 
    stack <Node *> s1;
    stack <Node *> s2;
    s1.push(root);
    while(s1.empty()==false){
        Node *temp=s1.top();
        s2.push(temp);
        s1.pop();
        if(temp->left != NULL)
            s1.push(temp->left);
        if(temp->right != NULL)
            s1.push(temp->right);
    }
    while(s2.empty()==false){
        Node * p=s2.top();
        cout<<p->data<<" ";
        s2.pop();
    }
} 
  
