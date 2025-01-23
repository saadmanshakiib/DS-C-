#include<iostream>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
node(int data){
    this->data = data;
    left = NULL;
    right = NULL;
}
};
node* insert(node* root,int k){
    if(root == NULL){
        node* t = new node(k);
        return t;
    }
    else{
        if(k > root->data){
            root->right = insert(root->right,k);
        }
        else if(k < root->data){
            root->left = insert(root->left,k);
        }
    }
return root;
}
        void inorder(node* root){
            if(root==NULL) return;
            inorder(root->left);
            cout<<" "<<root->data;
            inorder(root->right);
        }
        node* deletebst(node* root,int t){
            if(root==NULL) return NULL;
            if(root->data > t){
                root->left = deletebst(root->left,t);
                return root;
            }
            if(root->data < t){
                root->right = deletebst(root->right,t);
                return root;
            }
            else{
                //leaf node
                if(!root->left && !root->right){
                    delete root;
                    return NULL;
                }
                //one child -> left
               else if(!root->right){
                        node* t = root->left;
                        delete root;
                        return t;
                }// one child -> right
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
node* root = NULL;
root = insert(root,67);
root = insert(root,23);
root = insert(root,55);
root = insert(root,78);
root = insert(root,12);
inorder(root);
cout<<endl;
root = deletebst(root,55);
inorder(root);
}