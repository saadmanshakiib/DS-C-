#include<iostream>
using namespace std;
class stack{
public:
int capacity,*a,top;
stack(int s){
    capacity = s;
    a = new int[s];
    top=-1;
}
    bool isFull(){return top==capacity-1;}
    bool isEmpty(){return top==-1;}
    void push(int value){
            if(isFull()) cout<<"Stack overflow"<<endl;

            a[++top] = value;
    }

        void pop(){
            if(isEmpty()) cout<<"Empty"<<endl;
            top--;
        }

        int peek(){
                        if(isEmpty()) cout<<"Empty"<<endl;
            return a[top];
        }

        void print(){
            for(int i=0;i<=top;i++) cout<<" "<<a[i];
        }

};
int main(){
stack s(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
s.push(80);
s.push(90);
s.push(100);
s.print();
cout<<endl;
s.pop();
s.print();
}