#include<iostream>
using namespace std;
class Stack{
public:
int top;
int capacity;
int *array;

    void setSize(int size){
        capacity = size;
        array = new int[capacity];
        top = -1;
    }
        bool isEmpty(){
            return top == -1;
        }

        void push(int data){            
            if(top == capacity-1){
                cout<<"Stack Overflow "<<endl;
            }
            else{
                array[++top] = data;                
            }
        }

            int pop(){
                if(isEmpty()){
                    cout<<"Stack Empty"<<endl;
                }
                else{
                    int ans = array[top];
                    top--;
                    return ans;
                }
            }

            void print(){
                for(int i=0;i<=top;i++){
                    cout<<array[i]<<" ";
                }
            }
};

int main(){
    Stack s;
    s.setSize(6);
    s.push(12);
    s.push(23);
    s.push(41);
    s.push(21);
    s.push(90);
    s.push(11);
    cout<<"Stack : ";
    s.print();

    int pop = s.pop();
    cout<<"\nAfter popping : ";
    s.print();

}