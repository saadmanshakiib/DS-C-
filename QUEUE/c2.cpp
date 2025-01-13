#include<iostream>
using namespace std;
class queue{
    public:
    int size,front,rear,*a;
    queue(int x){
        a = new int[x];
        front = rear = -1;
        size = x;
    }
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return (rear+1)%size == front;
    }
    void enqueue(int x){
        if(isEmpty()){
            front = rear = 0;
            a[0] = x;
            return;
        }
        else if(isFull()){
            cout<<"Full"<<endl;
        }
        else{
            rear = (rear+1)%size;
            a[rear] = x;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
        }
        else if(front==rear){
            front = rear = -1;
        }
        else{
            front = (front+1)%size;
        }
    }
    void print(){
        for(int i=front;i<=rear;i++){
            cout<<" "<<a[i];
        }
    }
};
int main(){
queue q(5);
q.enqueue(44);
q.enqueue(21);
q.enqueue(44);
q.enqueue(43);
q.enqueue(41);
q.print();
cout<<endl;
q.dequeue();
cout<<endl;
q.print();
}