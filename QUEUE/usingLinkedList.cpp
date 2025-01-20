#include<iostream>
using namespace std;
class node{
    public:
int data;
node* next;
node(int data){
    this->data = data;
    next = NULL;
}
};
class queue{
    public:
    int size;
    node* front;
    node* rear;

    queue(){
        front=rear=NULL;
    }

    bool isEmpty(){return front==NULL;}

    void enqueue(int data){
        node *t = new node(data);
        if(rear == NULL){
            front = rear = t;
            return;
        }
        rear->next = t;
        rear = t;
        cout<<"Enqueued"<<endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue Empty"<<endl;
        }
        node* t = front;
        front = front->next;
        delete t;
        cout<<"Dequeued"<<endl;
    }
    void print(){
        node* t = front;
        while(t!=NULL){
            cout<<" "<<t->data;
            t = t->next;
        }
    }
};
int main(){
queue q;
q.enqueue(11);
q.enqueue(33);
q.enqueue(55);
q.print();
}