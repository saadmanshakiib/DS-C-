#include<iostream>
using namespace std;
class stack{
public:
int size,data,top,*a;
void setSize(int n){
    a = new int[n];
    top = -1;
    size = n;

}

bool isEmpty(){
return top==-1;
}
bool isFull(){ return top==size-1;}
void push(int x){
if(top == size-1){
cout<<"Stack overflow";
}
else{a[++top] = x;
}
}
int peek(){ return a[top];}
void pop(){
    --top;
}
void print(){
    for(int i=0;i<=top;i++){
        cout<<" "<<a[i];
    }
}
};
int main(){
stack s;
s.setSize(5);
s.push(11);
s.push(99);
s.push(55);
s.push(12);
s.push(45);
s.print();
cout<<endl;
s.peek();
cout<<endl;
s.pop();
s.print();
}