#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int data){
    this->data = data;
    next = NULL;
}};
class queue{
    public:
int value;
node* front;
node* rear;
queue(){
    rear = NULL;
    front = NULL;
}
bool isEmpty(){return front==NULL;}
void enqueue(int data){
    node* t = new node(data);
    if(rear == NULL){
        front = rear = t;
    }
    else{
        rear->next = t;
        rear = t;
    }
}
        int dequeue(){
            int value = front->data;
            if(isEmpty()){cout<<"Empty"<<endl; return -1;}
            else{
                node* t = front;
                front = front->next;
                delete t;
                return value;
            }
        }
        void front_rear(){
            node* t = front;
            while(t!=NULL){
                cout<<" "<<t->data;
                t = t->next;
            }
        }
        void printRearToFront(node* t) {
        if (t == nullptr) return;
        printRearToFront(t->next);
        cout << t->data << " ";
    }
          void printRearToFront() {
        printRearToFront(front);
        cout << endl;
    }

};

int main(){
 queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.front_rear();
    cout<<endl;
            q.printRearToFront();

}