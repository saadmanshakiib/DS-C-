#include<iostream>
using namespace std;
class stack{
    public:
int top;
int capacity;
int *array;
void setSize(int size){
    capacity = size;
    array = new int[capacity];
    top = -1;
}
void push(int value){
if(top == capacity-1){
    cout<<"stack overflow"<<endl;
}
else{
    array[++top] = value;
}
}
    int pop(){
        if(top==-1)cout<<"Stack Undeflow"<<endl;
        else {
            --top;
        }
    }

void print(){
    for(int i=0;i<=top;i++)cout<<" "<<array[i];
}
        int peek(){
            if(top==-1)cout<<"\nStack is empty"<<endl;
            else return array[top];
        }

            bool isEmpty(){
               if(top==-1)return true;
               else return false;
            }
};
int main(){
    stack s;
    s.setSize(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(6);
    s.push(11);
    s.print();
    s.pop();
    cout<<"\nAfter popping : "<<endl;
    s.print();
    cout<<"\nstack is empty or not : "<<s.isEmpty()<<endl;
}