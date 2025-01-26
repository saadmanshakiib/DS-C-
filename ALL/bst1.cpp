#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

    node* add(node*root,int data){
        if(root == NULL){
            node* t = new node(data);
            return t;
        }
        else if(data < root->data) root->left = add(root->left,data);
        else if(data > root->data) root->right = add(root->right,data);
        
        return root;
    }

    void inorder(node* root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<" "<<root->data;
        inorder(root->right);
    }
    void preorderTraversal(node* root) {
    if(root == nullptr) return;
    cout<<root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

    void postorder(node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<" "<<root->data;
    }


    node* dlt(node* root,int data){
        if(root==NULL) return;
        else if(data > root->data) root->right = dlt(root->right,data);
        else if(data < root->data) root->left = dlt(root->left,data);

        else{
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }
            else if(!root->right){
                node* t = root->left;
                delete root;
                return t;
            }
            else if(!root->left){
                node* t = root->right;
                delete root;
                return t;
            }
            else{
                 node* child = root->left;
                 node* parent = root;
                 while(child->right){
                    parent = child;
                    child = child->right;
                 }
                  if(root!=parent){
                        parent->right = child->left;
                        child->left = root->left;
                        child->right = root->right;
                        delete root;
                        return child;
                    }
                    else{
                        child->right = root->right;
                        delete root;
                        return child;
                    }
            }
        }
    }


int main(){

}