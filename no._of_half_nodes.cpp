unsigned int gethalfCount(struct Node* node) 
{ 
    int count=0;
    if(node==NULL)
        return 0;
    queue<Node *> q;
    q.push(node);
    while(!q.empty()){
        Node *temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        //************************************************************************
        // In level order traversal, we have to just add below condition to solve this question 
        if(temp->left == NULL && temp->right!=NULL  || temp->right == NULL && temp->left != NULL){
            count++;
        }
        //*************************************************************************
        //****************************for counting full nodes change the condition as*******************
        if( temp->right!=NULL && temp->left != NULL){
            count++;
        }
        //******************************************************************************************************
        //*******************************for counting leaf nodes change the conditions as below>>>>>>>>>>>>>>
        if( temp->right==NULL && temp->left == NULL){
            count++;
        }
        //******************************************************************************************************
        if(temp->left!=NULL){
            q.push(temp->left);}
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    return count;
} 
