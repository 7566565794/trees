//*******************************************Recursive Approach***********************************************
int findMax(struct node* root)
{
    if(root==NULL){
        return INT_MIN;
        }
    int max=INT_MIN;
    // int root_val=root->data;
    int left=findMax(root->left);
    int right=findMax(root->right);
    int root_val=root->data;
    if(left>right){
        max=left;
    }
    else{
        max=right;
    }
    if(max<root_val){
        max=root_val;
    }
    return max;
}
// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
    if(root==NULL){
        return INT_MAX;//here notice in base condition we are not returning 0 coz otherwise if 
        // all the elements are greater than zero then we will get 0 as least element which doesnt even exist.
    }
 int min=INT_MAX;
    // int root_val=root->data;
    int left=findMin(root->left);
    int right=findMin(root->right);
    int root_val=root->data;
    if(left<right){
        min=left;
    }
    else{
        min=right;
    }
    if(min>root_val){
        min=root_val;
    }
    return min;
}

//********************************************************iterative approach**************************************************
// Returns maximum value in a given Binary Tree
int findMax(struct node* root)
{
    //lets use level order traversal and see if it works
    queue <struct node*> q;
    struct node* temp=root;
    int max=INT_MIN;
    
    if(root == NULL){
        return 0;    
    }
    q.push(root);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(max<temp->data){
            max=temp->data;
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    return max;
}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
// Your code goes here
    queue <struct node*> q;
    struct node *temp=NULL;
    int min=INT_MAX;
    q.push(root);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(min>temp->data){
            min=temp->data;
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    return min;
}
