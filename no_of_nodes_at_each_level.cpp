//working fine these test case but not accepted see
/*
2
2
1 2 L 1 3 R
2
5
1 2 R 1 3 L 2 4 L 2 5 R 4 7 L
7
Ouput:
2
4
*/
int getLevel(struct Node *node, int target)
{
	if(node==NULL){
	    return 0;
	}
	queue<struct Node *> q;
	q.push(node);
	q.push(NULL);
    int level=1;
	while(!q.empty()){
	    Node *temp=q.front();
	    q.pop();
	    if(temp==NULL && q.empty()==false){
	        q.push(NULL);
	        level++;
	    }
	    else {
	        if(temp->left!=NULL){
	            q.push(temp->left);
	        }
	        if(temp->right!=NULL)
	        {
	            q.push(temp->right);
	        }
	        if(temp->data==target){
	            return level;
	        }
	    }
	}
	
}
