#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void insert(node *&root, int data)
{
    if (root == NULL)
    {
        root = newNode(data);
        return;
    }
    if (data < root->data)
        insert(root->left, data);
    else
        insert(root->right, data);
}

node *findMinNode(node *root)
{
    node *current = root;
    while (current->left != NULL)
        current = current->left;
    return current;
}

node *deleteNode(node *root, int data)
{
    if (root == NULL)
        return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node *temp = findMinNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

void preOrder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;
    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;
    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;
    deleteNode(root, 20);
    cout << "After deletion of 20\n";
    cout << "Pre-order traversal: ";
    preOrder(root);
    }

