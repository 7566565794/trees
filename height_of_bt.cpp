//recursive method to find height of binary tree
int height(Node* node)
{
   // Your code here
    if(node==NULL){
        return 0;
    }
    int l=height(node->left);
    int r=height(node->right);
    if(l>r)
        return l+1;
    else
        return r+1;
}
//iterative method
if(node==NULL)
        return 0;
    
    int height=0;
    queue<Node *>q;
    q.push(node);
    while(1){
        int nodecount=q.size();
        if(nodecount==0){
            return height;
        }
        height++;
        while(nodecount>0){
            Node *temp=q.front();
            q.pop();
            if(temp->left != NULL)
                q.push(temp->left);
            if(temp->right!= NULL)
                q.push(temp->right);
                nodecount--;
        }
    }
    note : sometimes they might be asking depth, depth is always height -1 so simply from ans subtract 1;
