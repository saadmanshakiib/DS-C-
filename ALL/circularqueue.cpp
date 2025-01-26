#include<iostream>
using namespace std;
class queue{
public:
int size,*a,front,rear;

    queue(int s){
        size = s;
        a = new int[s];
        front = rear = -1;
    }
        bool isEmpty(){return front==-1;}
        bool isFull(){return (rear+1)%size == front;}

        void enqueue(int data){
            if(isEmpty()){
                front = rear = 0;
                a[rear] = data;
                return;
            }
            if(isFull()){cout<<"Full"<<endl;}
            rear = (rear+1)%size;
            a[rear] = data;
        }

        void dequeue(){
            if(isEmpty()) cout<<"Empty"<<endl;
            if(front==rear) front=rear=-1;
            front = (front+1)%size;
        }

          void print(){
        for(int i= front;i<size;i++){
            cout<<" "<<a[i];
        }
        cout<<endl;
    }
};

int main(){
    queue q(5);
    q.enqueue(44); 
    q.enqueue(34); 
    q.enqueue(32); 
    q.enqueue(12); 
    q.enqueue(22); 
q.dequeue();
q.print();
    
    }