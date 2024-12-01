#include<iostream>
using namespace std;
class node{
public:
int value;
node* next;
node(){}
node(int value){this->value = value;}
};
void print(node*& head){
    node* t = head;
    while(t!=NULL){
        cout<<t->value<<" ";
        t = t->next;
    }
}
void deletefirst(node*& head){
    node* t = head;
    head = head->next;
    delete t;
}
void deletelast(node*& head){
    node* t = head;
    node* p = NULL;
    while(t->next!= NULL){
        p = t;
        t = t->next;
    }
    delete t;
    p->next = NULL;
}
int main(){
node* head = new node(23);
node* two = new node(24);
node* three = new node(25);
node* four = new node(26);

head->next = two;
two->next = three;
three->next = four;
four->next = NULL;
print(head);
cout<<endl;
cout<<"\nDeleted First : ";
deletefirst(head);
print(head);
cout<<"\nDeleted Last : ";
deletelast(head);
print(head);
}