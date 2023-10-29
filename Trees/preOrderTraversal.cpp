#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

void preOrder(Node * root)
{
    if(root!=NULL)
    {
        cout<<(root->data)<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    // create a binary search tree
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // perform preorder traversal
    cout << "PreOrder traversal: ";
    preOrder(root);

    return 0;
}