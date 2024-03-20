// HEIGHT OF BINARY TREE
/*
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int h1=height(node->left);
        int h2=height(node->right);

        int ans=max(h1,h2)+1;
        return ans;
    }
};
*/
//
//
// DIAMTER OF BINARY TREE
/*
class Solution {
  public:
  int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int h1=height(node->left);
        int h2=height(node->right);

        int ans=max(h1,h2)+1;
        return ans;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL){
            return 0;
        }
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+1+height(root->right);
        int ans=max(op1,max(op2,op3));
        return ans;
    }
};
*/
//
// optimized
/*
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int> diameterfast(Node *root){
        if(root==NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        pair<int,int> left=diameterfast(root->left);
        pair<int,int> right=diameterfast(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second +1 +right.second;

        pair<int,int> ans;
        ans.first=max(op1,max(op2,op3));
        ans.second=max(left.second,right.second)+1;

        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        return diameterfast(root).first;
    }
};
*/
//
// BALANCED BINARY TREE
/*
class Solution{
    private:
     int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int h1=height(node->left);
        int h2=height(node->right);

        int ans=max(h1,h2)+1;
        return ans;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //base case
        if(root==NULL){
            return true;
        }

        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);

        bool diff= abs(height(root->left)-height(root->right))<=1;

        if(left && right && diff){
            return true;
        }
        else{
            return false;
        }
    }
};
*/
//
//
// OPTIMIZED
/*
pair<bool, int> isbalancedfast(node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = isbalancedfast(root->left);
    pair<bool, int> right = isbalancedfast(root->right);

    bool leftans = left.first;
    bool rightans = right.first;
    bool diff = abs(leftans.second - rightans.second) <= 1;

    if (leftans && rightans && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
bool isbalanced(node *root){
    return isbalancedfast(root).first;
}
*/
//
//
//IDENTICAL TREES
/*
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1 == NULL && r2==NULL){
            return true;
        }
        if((r1==NULL && r2!=NULL) || (r2==NULL && r1!=NULL)){
            return false;
        }
        bool left=isIdentical(r1->left,r2->left);
        bool right=isIdentical(r1->right,r2->right);
        
        bool value=r1->data==r2->data;
        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
};
*/
//
//
//SUM
/*
class Solution
{
    public:
    pair<bool,int> issumtreefast(Node *root){
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        if(root->left==NULL && root->right==NULL){
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> leftans=issumtreefast(root->left);
        pair<bool,int> rightans=issumtreefast(root->right);
        
        bool left=leftans.first;
        bool right=rightans.first;
        
        bool condition=root->data==leftans.second+rightans.second;
        pair<bool,int> ans;
        if(left && right && condition){
            ans.first=true;
            ans.second=root->data+leftans.second+rightans.second;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    bool isSumTree(Node* root)
    {
        return issumtreefast(root).first;
    }
};
*/
//
//
//