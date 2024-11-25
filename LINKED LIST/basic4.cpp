#include<iostream>
using namespace std;
struct node{
int data;
node* next;
node(int data){
    this->data = data;
}
};
int main(){

node* head = new node(10);
node* sec = new node(20);
node* third = new node(30);
node* fourth = new node(40);

head->next = sec;
sec->next = third; 
third->next = fourth;
fourth->next = NULL;

node* temp = head;
while(temp!=NULL){
cout<<temp->data<<" -> ";
temp = temp->next;
}
delete head,sec,third,fourth;

}