#include <iostream>
#include <queue>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "ENTER THE DATA" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "ENTER THE DATA FOR FOR INSERTING LEFT OF" << data << endl;
    root->left = buildtree(root->left);
    cout << "ENTER THE DATA FOR FOR INSERTING RIGHT OF" << data << endl;
    root->right = buildtree(root->right);
    return root;
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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    int ans = max(h1, h2) + 1;
    return ans;
}
int inorder(node *root)
{
    // LNR
    if (root == NULL)
    {
        return 0;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    // LRN
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void buildfromlevelorder(node *&root)
{
    queue<node *> q;
    cout << "ENTER THE DATA" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "ENTER THE LEFT NODE FOR " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "ENTER THE RIGHT NODE FOR " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    // buildfromlevelorder(root);
    levelordertraversel(root);
    cout << endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // inorder(root);
    cout << height(root) << endl;
    //  preorder(root);
    // postorder(root);
    return 0;
}