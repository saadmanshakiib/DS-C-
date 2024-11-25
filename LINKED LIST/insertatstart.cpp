#include<iostream>
using namespace std;
struct node{
int data;
node* next;
node(){}
node(int data){
    this->data = data;
}
};
void insertatstart(node*& head,int value){
node* newnode = new node();//create a new node
newnode->data = value;// insert the value into new node data
newnode->next = head;// give access to newnode-> next to hold the address
head = newnode;// give access to head to hold the newnode
}

int main(){
node* head = new node(10);
node* sec = new node(20);
node* third = new node(30);
node* fourth = new node(40);

head->next = sec;
sec->next = third; 
third->next = fourth;
fourth->next = NULL;

cout<<"\nBefore inserting: ";
node* temp = head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp = temp->next;
}
insertatstart(head,69);
cout<<"\nAfter inserting: ";
node* t = head;
while(t!=NULL){
    cout<<t->data<<" ";
    t = t->next;
}
delete head,sec,third,fourth;

}