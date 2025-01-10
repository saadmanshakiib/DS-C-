#include<iostream>
using namespace std;
class queue{
    public:
int *array;
int front,rear,size;
queue(int n){
    array = new int[n];
    size=n;
    front=rear=-1;
}
bool isEmpty(){
   return front==-1; 
}
bool isFull(){
    return rear==size-1;
}
void push(int x){
    if(isEmpty()){
        front=rear=0;
        array[0] = x;
        return;
    }
    else if(isFull()){
        cout<<"\nOverflow"<<endl;
    }
    else{
        rear++;
        array[rear] = x;
    }
}
void pop(){
    if(isEmpty())cout<<"\nunderflow";
    else{
        if(front==rear){
            cout<<"\npopped"<<endl;
            front = rear = -1;
        }
        else{
            cout<<"\npopped"<<endl;
            front++;
        }
    }
}
int start(){
if(!isEmpty()){
    return array[front];
}
else{
    cout<<"Empty"<<endl;
}
}
void print(){
    for(int i=front+1;i<size;i++){
        cout<<" "<<array[i];
    }
}
};
int main(){
queue q(5);
q.push(5);
q.push(11);
q.push(54);
q.push(78);
q.push(77);
q.push(88);
cout<<"Queue : ";
q.print();
q.pop();
cout<<"queue after popping : ";
q.print();
q.pop();
cout<<"queue after popping : ";
q.print();

}