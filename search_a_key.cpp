//recursive way to search for a given key in a tree
bool search(struct Node* node, int key) 
{ 
    if(node==NULL)
        return 0;
    if(node->data == key){
        return 1;
    }
    bool l=search(node->left,key);
    if(l==1)
        return 1;
    else
        return search(node->right,key);
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
