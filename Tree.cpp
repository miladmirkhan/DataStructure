
#include <iostream>
using namespace std;

struct node
{
    int value;
    node* left;
    node* right;
};
node* root;

/////////////////////////////////////////////////////////////////////////////////////////////////
//Insert element

node* insert(node* r,int data) 
{
    if (r == NULL)//no value
    {
        r = new node;
        r->value = data;
        r->left = NULL;
        r->right = NULL;
    }
    // if has value
    else if (data < r->value)// data is smaler than node
    { 
        r->left = insert(r->left, data);
    }
    else
    {     //data is bigger than node 
        r->right = insert(r->right, data);
    }

    return r;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// INorder  BST

void inOrder(node* r)
{
    if (r != NULL) 
    {
        inOrder(r->left);
        cout << " " << r->value;
        inOrder(r->right);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////
// preOrder  BST

void preOrder(node* r)
{
    if (r != NULL)
    {
        cout << " " << r->value;
        inOrder(r->left);
        inOrder(r->right);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////
// PostOrder  BST

void PostOrder(node* r)
{
    if (r != NULL)
    {
        inOrder(r->left);
        inOrder(r->right);
        cout << " " << r->value;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////
// Search  BST
bool search(node* r, int key)
{
    if (r == NULL)
        return false;

    else if (r->value == key)
        return true;

    else if (r->value < key)
    {
        search(r->right, key);
    }
    else
        search(r->left, key);
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//deletion in BST
node* FindMin(node* r) 
{
    while (r->left != NULL)
        r = r ->left;
    return r;
}
node* Delete(node* r, int data)
{
    if (r == NULL)
        return r;
    else if (data < r->value)
        r->left = Delete(r->left, data);

    else if (data > r->value)
        r->right = Delete(r->right, data);

    else ///found deletion node
    {
        if (r->left == NULL && r->right == NULL)// no child
            r = NULL;

        else if (r->left == NULL) 
        {
            r = r->right;
            r->right = Delete(r->right, r->value);
        }
        else if (r->right == NULL)
        {
            r = r->left;
            r->left = Delete(r->left,r->value);
        }
        else //Case 3
        {
            node* temp = FindMin(r->right);
            r->value = temp->value;
            r->right = Delete(r->right, temp->value);
        }
    }
    return r;
}
int main()
{
    node* root;
    root = NULL;
    int n, v;
    cout << "How many data you want to insert \n ";
    cin >> n;
    for (int i = 0;i < n;i++) 
    {
        cout << "Data : " << i + 1 << " ";
        cin >> v;
        root = insert(root, v);
    }
    cout << "InOrder Traversel: ";
    inOrder(root);
    cout << "\n";

    cout << "preOrder Traversel: ";
    preOrder(root);
    cout << "\n";

    cout << "PostOrder Traversel: ";
    PostOrder(root);
    cout << "\n";

    cout << "Enter the search item: ";
    int S;cin >> S;
    if (search(root, S))
        cout << "you data exist. \n";
    else
        cout << "your data don't Exist. \n";

    
    cout << "delete which data: ";
    int d; cin >> d;
    Delete(root,d);
    cout << "\n";

    cout << "InOrder Traversel: ";
    inOrder(root);
    cout << "\n";

    cout << "preOrder Traversel: ";
    preOrder(root);
    cout << "\n";

    cout << "PostOrder Traversel: ";
    PostOrder(root);
    cout << "\n";
}

