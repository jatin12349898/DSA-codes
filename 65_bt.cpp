//sum of longest bloodline
/*
class Solution
{
public:
    void solve(Node* root,int sum , int &maxsum , int len , int &maxlen){
        //base case
        if(root == NULL){
            if(len > maxlen){
                maxlen = len;
                maxsum = sum;
            }
            else if(len == maxlen){
                maxsum = max(sum,maxsum);
            }
            return;
        }
        
        sum = sum + root->data;
        
        solve(root->left , sum , maxsum , len+1 , maxlen);
        solve(root->right , sum , maxsum , len+1 , maxlen);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len = 0;
        int maxlen = 0;
        
        int sum = 0;
        int maxsum = INT_MIN;
        
        solve( root , sum , maxsum , len , maxlen);
        
        return maxsum;
    }
};
*/
//
//
//LOWEST COMMON ANCESTOR
/*
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(root == NULL)
       {
           return NULL;
       }
       
       if(root->data == n1 || root->data == n2){
           return root;
       }
       
       Node* leftans = lca(root->left , n1 , n2);
       Node* rightans = lca(root->right , n1 , n2);
       
       if(leftans!= NULL && rightans!= NULL){
           return root;
       } 
       
       else if(leftans!= NULL && rightans == NULL){
           return leftans;
       }
       
       else if(leftans == NULL && rightans!= NULL){
           return rightans;
       }
       
       else{
           return NULL;
       }
    }
};*/
//
//
//K SUM PATHS
/*
class Solution{
  public:
    void solve(Node* root, int k, int &count, vector<int> path) {
        //base case
        if(root == NULL)
            return ;
        
        path.push_back(root->data);
        
        //left
        solve(root->left, k, count, path);
        //right
        solve(root->right, k, count, path);
        
        //check for K Sum
        
        int size = path.size();
        int sum = 0;
        for(int i = size-1; i>=0; i--)  {
            sum += path[i];
            if(sum == k)
                count++;
        }
        
        path.pop_back();
    }
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int count = 0;
        solve(root, k, count, path);
        return count;
    }
};*/
//
//
//
//Kth ANSCESTOR
/*
Node* solve(Node* root,int &k, int node){
     if(root == NULL){
        return NULL;
    }
    
    if(root->data == node){
        return root;
    }
    
    Node* leftans = solve(root->left , k , node);
    Node* rightans = solve(root->right , k , node);
    
    if(leftans!= NULL && rightans == NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return leftans;
    }
    
    if(leftans ==NULL && rightans != NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return rightans;
    }
    
    return NULL;
}
int kthAncestor(Node *root, int k, int node)
{
   Node* ans = solve(root, k , node);
   if(ans == NULL || ans->data == node){
       return -1;
   }
   else{
       return ans->data;
   }
}
*/
//
//
//
//maxisum sum of adjascent nodes
/*
class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair<int,int> solve(Node* root){
        if(root == NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        
        pair<int,int> left= solve(root->left);
        pair<int,int> right= solve(root->right);
        
        pair<int,int> res;
        
        res.first = root->data + left.second + right.second;
        
        res.second = max(left.first,left.second) + max(right.first,right.second);
        
        return res;
        
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int> ans=solve(root);
        return max(ans.first , ans.second);
    }
};*/
//
//