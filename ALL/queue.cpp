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

    bool isFull(){return rear==size-1;}
    bool isEmpty(){return front == -1;}

    void enqueue(int data){
        if(isFull())cout<<"Full"<<endl;
        if(isEmpty()){
            front = rear = 0;
            a[0] = data;
            return;
        }
        rear++;
        a[rear] = data;
    }

        void dequeue(){
            if(front==rear) front = rear = -1;
            if(isEmpty()) cout<<"Empty"<<endl;
            front++;
        }
        
        int start(){
            if(!isEmpty())return a[front];
            else cout<<"Empty"<<endl;
        }
};
int main(){
queue q(5);
q.enqueue(5);
q.enqueue(11);
q.enqueue(54);
q.enqueue(78);
q.enqueue(77);
}