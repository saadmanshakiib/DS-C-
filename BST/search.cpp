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

        node* insert(node* root,int t){
        if(root==NULL){
            node* te = new node(t);
            return te;
        }
        else if(t < root->data){
            root->left = insert(root->left,t);
        }
        else if(t > root->data){
            root->right = insert(root->right,t); 
        }
        return root;
        }


                bool search(node* root,int t){
        if(root->data == t) return root->data;
        else if(root->data > t){
            return search(root->left,t);
        }
        else if(root->data < t){
        return search(root->right,t);
        }
        else return false;
        }


int main(){
    node* root = NULL;
    int a[5] = {23,11,45,32,12};
    for(int i=0;i<5;i++){
       root = insert(root,90);
    }
    bool r = search(root,a[3]);
    cout<<r<<endl;
}