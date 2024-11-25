#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(){}
node(int data){this->data = data;}
};
void insertintofirst(node*& head,int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}
void insertatend(node*& head,int data){
node* newnode = new node();
newnode->data = data;
newnode->next = NULL;
node* t = head;
while(t->next!=NULL){
    t = t->next;
}
t->next = newnode;
}
int main(){
    node* head = new node(10);
    node* two = new node(11);
    node* three = new node(12);
    node* four = new node(13);
    node* five = new node(14);
    ///declared all the values 
    //// now declare address to hold by each node
    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;
    //gave the address to each element to hold
// now print
cout<<"\nBefore Insert : ";
node* temp = head;
while(temp->next != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
insertintofirst(head,69);
cout<<"\nAfter Insert : ";
node* t = head;
while(t->next!= NULL){
    cout<<t->data<<" ";
    t = t->next;
}
insertatend(head,90);
cout<<"\nAfter inserting into last : ";
node* t1 = head;
while(t1->next!= NULL){
    cout<<" "<<t1->data;
    t1 = t1->next;
}
cout<<head<<endl;
}