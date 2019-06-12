
// in this at each level we have elements what we want to find is the average of elements present at each level.
void averageOfLevels(Node* root) 
{ 
   if(root==NULL){
       return;
   }
   queue<Node *> q;
   q.push(root);

   while(q.empty()==false){
     queue<Node *>q1;
     int count=0;
     int sum=0;
       while(q.empty()==false){
           Node *temp;
           temp=q.front();
           q.pop();
           sum=sum+temp->val;
           count++;
           if(temp->left!=NULL){
               q1.push(temp->left);
           }
           if(temp->right!=NULL){
               q1.push(temp->right);
           }
       }
        q=q1;
   cout << (sum * 1.0 / count) << " "; 
   }
  
    
} 
