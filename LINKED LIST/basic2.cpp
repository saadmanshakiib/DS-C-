#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){this->data = data;}
};
    int main(){
        Node *head;
        head = new Node(56);
        cout<<head<<endl;//memory address of data variable
                cout<<head->data<<endl;
                        cout<<&head<<endl;// memory address of head variable itself

    }
