//problem here how come this is giving me sig fault although im able to traverse both the nodes.
//please do check ask either chithra or shaji
Node *deepest_node(struct Node *root,int key){
    queue<Node *> q;
    q.push(root);
    struct Node *temp;
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
    return temp;
}
Node* search(struct Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->key==key){//base condition
        return root;
    }
    struct Node *l=NULL;
    l=search(root->left,key);
    if(l!=NULL){
        return l;
    }
    else{
        return search(root->right,key);
    }
}
void deletionBT(struct Node* root, int key)
{
    if(root==NULL){
        return ;
    }
    struct Node *del=search(root,key);
    if(del==NULL){
        return ;   
    }
    struct Node *deepest=deepest_node(root,key);
    del->key=deepest->key;
    // free(deepest);
    // free(deepest);
    // cout<<"here is my deepest_node="<<deepest->key<<endl;
    // delete(deepest);
}
