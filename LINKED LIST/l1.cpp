#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(){}
node(int data){
    this->data = data;
}
};
void insertatstart(node*& head, int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}
void insertatlast(node*& head,int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    node* t = new node();
    while(t!=NULL){
        t = t->next;
    }
    t->next = newnode;
}
int main(){
node* head = new node(45);
node* two = new node(46);
node* three = new node(47);
node* four = new node(48);
/////////assigning value 
/////////assigning address
head->next = two;
two->next = three;
three->next = four;
four->next = NULL;

insertatstart(head,44);

node* t = head;
cout<<"\nInsert at first : ";
while(t != NULL){
    cout<<" "<<t->data;
    t = t->next;
}
delete head,two,three;
}