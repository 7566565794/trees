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
        return INT_MAX;
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
