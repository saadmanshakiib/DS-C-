#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){ 

    val = value;
    left = nullptr;
    right = nullptr;
     
    }
};

TreeNode* insert(TreeNode* root, int key) {
    TreeNode* newNode = new TreeNode(key);

    if (!root) return newNode;

    TreeNode* curr = root;
    TreeNode* parent = nullptr;

    while(curr){
        parent = curr;
        if (key < curr->val)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if(key < parent->val){
        parent->left = newNode;
    }
    else{
        parent->right = newNode;
    }

    return root;
}

TreeNode* findMin(TreeNode* node) {
    while (node && node->left) {
        node = node->left;
    }
    return node;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    TreeNode* parent = nullptr;
    TreeNode* curr = root;

    while (curr && curr->val != key) {
        parent = curr;
        if (key < curr->val)
            curr = curr->left;
        else
            curr = curr->right;
    }

    if (!curr) return root;

    if (!curr->left || !curr->right) {
        TreeNode* newCurr = curr->left ? curr->left : curr->right;

        if (!parent) return newCurr;

        if (curr == parent->left)
            parent->left = newCurr;
        else
            parent->right = newCurr;

        delete curr;
    } else {
        TreeNode* successor = findMin(curr->right);
        int val = successor->val;
        root = deleteNode(root, successor->val);
        curr->val = val;
    }

    return root;
}

void inorderTraversal(TreeNode* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int calculateHeight(TreeNode* root) {
    if (!root) return 0;
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    return 1 + max(leftHeight, rightHeight);
}

int calculateHeightDifference(TreeNode* root) {
    if (!root) return 0;
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    return abs(leftHeight - rightHeight);
}

int main() {
    TreeNode* root = nullptr;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    root = deleteNode(root, 70);
    cout << "In-order Traversal: ";
    inorderTraversal(root);
    cout << endl;
    int heightDifference = calculateHeightDifference(root);
    cout << "Height Difference: " << heightDifference << endl;
}
