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
void insertatfirst(node*& head,int value){
    node* newnode = new node(value);
    newnode->next = head;
    head = newnode;
}
void insertatend(node*& head,int value){
    node* newnode = new node();
    newnode->value = value;
    newnode->next = NULL;
    node* t = head;
    while(t->next!= NULL){
        t = t->next;
    }
    t->next = newnode;
}
void insertatpos(node*& head,int value,int pos){
    node* t = head;
    pos--;
    while(pos--){
        t = t->next;
    }
    node* t2 = new node(value);
    t2->next = t->next;
    t->next = t2;
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
insertatfirst(head,22);
insertatend(head,27);
print(head);
cout<<endl;
insertatpos(head,10,3);
print(head);
}