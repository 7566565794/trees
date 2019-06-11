//recursive way to search for a given key in a tree
bool ifNodeExists(struct Node* node, int key) 
{ 
    if(node==NULL)
        return false;
    if(node->data == key){
        return true;
    }
    bool res1=ifNodeExists(node->left,key);
    bool res2=ifNodeExists(node->right,key);
    return res1||res2;
} 
//iterative way to search for a given key in a tree
bool ifNodeExists(struct Node* node, int key) 
{ 
    if(node==NULL)
        return false;
    queue < struct Node *> q;
    q.push(node);
    while(q.empty()==false){
        struct Node *temp=q.front();
        q.pop();
        if(temp->data == key){
            return true;
        }
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
    }
    return false;
} 
