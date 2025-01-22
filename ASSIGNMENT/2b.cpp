#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;
    Node(int val) {
        value = val;
        left = right = nullptr;
    }
};

class BST{
public:
    //Node* root;
    BST(){
        //root = nullptr;
    }
   Node* insert(Node* root, int target) {
    if (root == NULL) {
        Node* t = new Node(target);
        return t;
    }
    if(target < root->value) {
        root->left = insert(root->left, target);
    }
     else {
        root->right = insert(root->right, target);
    }
    return root;
}

    Node* deleteNode(Node* root, int val) {
        if (!root) return root;
        if (val < root->value) {
            root->left = deleteNode(root->left, val);
        } 
        else if (val > root->value) {
            root->right = deleteNode(root->right, val);
        } 
        else {
            if (!root->left) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (!root->right) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = minValueNode(root->right);
            root->value = temp->value;
            root->right = deleteNode(root->right, temp->value);
        }
        return root;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left) {
            current = current->left;
        }
        return current;
    }

    void inorderTraversal(Node* root) {
        if (!root) return;
        inorderTraversal(root->left);
        cout << root->value << " ";
        inorderTraversal(root->right);
    }

    int height(Node* root) {
        if (!root) return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
};

int main() {
    BST tree;
        Node* root = NULL;
    tree.insert(root,50);
    tree.insert(root,30);
    tree.insert(root,20);
    tree.insert(root,40);
    tree.insert(root,70);

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(root);
    cout << endl;

    cout << "Height of the BST: " << tree.height(root) << endl;

    /*tree.root = tree.deleteNode(root, 20);  
    tree.root = tree.deleteNode(tree.root, 30);
    tree.root = tree.deleteNode(tree.root, 50); */

    cout << "Inorder Traversal after Deletions: ";
    tree.inorderTraversal(root);
    cout << endl;

    cout << "Height of the BST after deletions: " << tree.height(root) << endl;

    return 0;
}
