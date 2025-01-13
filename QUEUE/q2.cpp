#include<iostream>
using namespace std;
class queue{
public:
int front,rear,*a,size;
queue(int x){
    a = new int[x];
    size = x;
    front = rear = -1;
}
bool isEmpty(){
return front==-1;
}

bool isFull(){
    return rear == size-1;
}
void enqueue(int x){
    if(isEmpty()){
        front = rear = 0;
        a[0] = x;
        cout<<"Enqueud"<<endl;
        return;
    }
    else if(isFull()){
        cout<<"Full"<<endl;
    }
    else{
        a[++rear] = x;
        cout<<"enqueued"<<endl;
    }
}
void dequeue(){
    if(isEmpty()){
        cout<<"Empty"<<endl;
    }
    else {
        if(front==rear){
            front = rear = -1;
            cout<<"dequeued"<<endl;
        }
        else{
            front++;
            cout<<"dequeued"<<endl;
        }
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
q.enqueue(12);
q.enqueue(22);
q.enqueue(33);
q.enqueue(34);
q.enqueue(77);
//q.print();
//cout<<q.isEmpty();
//  cout<<q.isFull();
q.dequeue();
cout<<endl;
q.print();
}