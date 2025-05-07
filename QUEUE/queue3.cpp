#include<iostream>
using namespace std;
class Queue{
    int front,rear,size,*array;
    Queue(int size){
        this->size = size;
        array = new int[size];
        front=rear=-1;
    }

        bool isEmpty(){
            return front==-1;
        }
        bool isFull(){
            return rear == size-1;
        }

            void enqueue(int data){
                if(isEmpty()){
                    front = rear = 0;
                    array[0] = data;
                        return;
                }
                else if(isFull()){
                    cout<<"Queue overflow"<<endl;
                }
                else{
                    array[++rear] = data;
                }
            }

                void dequeue(){
                    if(isEmpty()){
                        cout<<"Queue Empty"<<endl;
                    }
                    else {
                        if(isFull()){
                        front++;
                    }
                    else if(front == rear ){
                        front = rear = -1;
                    }
                }
                }

};
