#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
node *insertintoBST(node *root, int d)
{

    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertintoBST(root->right, d);
    }
    if (d < root->data)
    {
        root->left = insertintoBST(root->left, d);
    }

    return root;
}
void takeinput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertintoBST(root, data);
        cin >> data;
    }
}
void levelordertraversel(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

node *minvalue(node *root)
{
    node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
node *maxvalue(node *root)
{
    node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
node *deletee(node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }

        // right
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minvalue(root->right)->data;
            root->data = mini;
            root->right = deletee(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        // go to left
        root->left = deletee(root->left, val);
        return root;
    }

    else
    {
        // right me jao
        root->right = deletee(root->right, val);
        return root;
    }
}
int main()
{
    node *root = NULL;

    cout << "ENTER THE DATA TO CREATE BST" << endl;
    takeinput(root);
    cout << "PRINTING BST" << endl;
    levelordertraversel(root);
}