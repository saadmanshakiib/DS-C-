#include<iostream>
using namespace std;
struct node{
int data;
node* next;
node(){}
node(int data){this->data = data;}
};
void print(node*& head){
    node* t = head;
    while(t!= NULL){
        cout<<" "<<t->data;
        t = t->next;
    }
}
void insertatfirst(node*& head,int data){
    node* newnode = new node(data);
    newnode->next =  head;
    head = newnode;
}
void insertatlast(node*& head,int data){
    node* newnode = new node(data);
    newnode->next = NULL;
    node* t = head;
    while(t->next!=NULL){
        t = t->next;
    }
    t->next = newnode;
}
void insertatpos(node*& head,int pos,int data){
    pos--;
    node* t = head;
    while(pos--){
        t = t->next;
    }
    node* t2 = new node(data);
    t2->next = t->next;
    t->next = t2;
}
void deletefirst(node*& head){
    node* t = head;
    head = head->next;
    delete t;
}
void deletelast(node*& head){
    node* c = head;
    node* p = NULL;
    while(c->next != NULL){
            p = c;
            c = c->next;
    }
    delete c;
    p->next = NULL;
}
void deleteatpos(node*& head,int pos){
    pos--;
    node* c = head;
    node* p = NULL;
    while(pos--){
        p = c;
        c = c->next;
    }
    p->next = c->next;
    delete c;
}
int main(){
node* head = new node(11);
node* sec = new node(12);
node* third = new node(13);
node* fourth = new node(14);

head->next = sec;
sec->next = third;
third->next = fourth;
fourth->next = NULL;

print(head);
insertatfirst(head,10);
cout<<"\nAfter inserting at first : ";
print(head);

insertatlast(head,15);
cout<<"\nAfter inserting at last : ";
print(head);

insertatpos(head,1,22);
cout<<"\nAfter inserting at pos : ";
print(head);

deletefirst(head);
cout<<"\nAfter deleting  first : ";
print(head);

deletelast(head);
cout<<"\nAfter deleting  last : ";
print(head);

deleteatpos(head,3);
cout<<"\nAfter deleting at pos : ";
print(head);

}