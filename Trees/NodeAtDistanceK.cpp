#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
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

void PrintDistanceK(Node* root, int k) {
    if (root == NULL) {
        return;
    }
    if (k == 0) {
        cout << root->data << " ";
        return;
    }
    PrintDistanceK(root->left, k - 1);
    PrintDistanceK(root->right, k - 1);
}

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int k = 2;
    cout << "Elements at a distance " << k << " from the root are: ";
    PrintDistanceK(root, k);
    cout << endl;

    return 0;
}