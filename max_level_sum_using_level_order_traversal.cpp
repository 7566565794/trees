//hy why are u giving seg fault i dont even understand
int maxLevelSum(Node * node)
{
   if(node==NULL){
	    return 0;
	}
	int max_level=1;
	int curr_sum=0;
	int max_sum=0;
	queue<struct Node *> q;
	q.push(node);
	q.push(NULL);
    int level=1;
	while(!q.empty()){
	    Node *temp=q.front();
	    q.pop();
	    if(temp==NULL && q.empty()==false){
	        q.push(NULL);
	        if(curr_sum>max_sum){
	            max_sum=curr_sum;
	            max_level=level;
	            curr_sum=0;
	        }
	        level++;
	        
	    }
	    else {
	        curr_sum=curr_sum+temp->data;
	        if(temp->left!=NULL){
	            q.push(temp->left);
	        } 
	        if(temp->right!=NULL)
	        {
	            q.push(temp->right);
	        }
	    }   
	    }
   return max_level;
}
//will see what is the problem......... will ask chithra or shaji
