#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node* insert(node* root, int target) {
    if (root == NULL) {
        node* t = new node(target);
        return t;
    }
    if (target < root->data) {
        root->left = insert(root->left, target);
    } else {
        root->right = insert(root->right, target);
    }
    return root;
}

void inorder(node* root) {
    if (!root)
        return;
    inorder(root->left);            
    cout << " " << root->data;     
    inorder(root->right);          
}

int main(){
    int a[] = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};
    node* root = NULL;
    for (int i = 0; i < 10; i++) {
        root = insert(root, a[i]);
    }
    cout << "In-order Traversal:";
    inorder(root);
    cout << endl;

    return 0;
}
