#include<iostream>
using namespace std;
struct bst{
int data;
bst* right;
bst* left;
    bst(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

        bst* insert(bst*& root,int data){
            if(root == nullptr){
            bst* temp = new bst(data);
            return temp;
            }
            else if(root->data < data){
                root->right = insert(root->right,data);
            }
            else if(root->data > data){
                root->left = insert(root->left,data);
            }
            return root;
        }


            bool search(bst*& root,int target){
                if(root->data == target){
                    return root->data;
                }
                else if(root->data > target){
                   return search(root->left,target);
                }
                else{
                    return search(root->right,target);
                }
                return false;
            }



        void inorderTraverse(bst*& root){
            if(root==nullptr){
                return;
            }
            inorderTraverse(root->left);
            cout<<" "<<root->data;
                        inorderTraverse(root->right);
        }

    int main(){
int a[] = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};
    bst* root = NULL;
    for (int i = 0; i < 10; i++) {
        root = insert(root, a[i]);
    }
    cout << "In-order Traversal:";
    inorderTraverse(root);
    cout << endl;
    bool r = search(root,88);
        cout << r;
    return 0;
}