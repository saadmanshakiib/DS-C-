#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
}; 
class stack{
    public:
    int size;
    node *top;
    stack(){
        top = NULL;
        size = 0;
    }
    void push(int value){
        node* t = new node(value);
        t->next = top;
        top = t;
        size++;
    }
    void pop(){
        if(top==NULL) cout<<"Stack empty"<<endl;
        else{
            node* t = top;
            top = t->next;
            delete t;
            size--;
        }
    }
    void print(){
        while(top!= NULL){
            cout<<" "<<top->data;
            top = top->next;
        }
    }
    int peek(){
        return top->data;
    }
};
int main(){
stack s;
s.push(11);
s.push(21);
s.push(12);
s.push(14);
s.push(16);
s.pop();
cout<<endl; 
s.pop();
cout<<endl;
s.print();
}