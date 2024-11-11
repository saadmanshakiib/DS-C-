#include<iostream>
using namespace std;
int main(){
    int value = 80;
    int *pointer = new int; // assigned for dynamic memory allocation
    *pointer = value; // set the value into *pointer
    cout<<"\nValue of variable : "<<*pointer<<endl;
    delete pointer; // freed up the memory . now we have nothing into the *pointer variable;
    cout<<"After using delete pointer : "<<*pointer<<endl; // will print garbage value
    pointer = nullptr;
    cout<<"\nPointer = "<<pointer<<endl;
}