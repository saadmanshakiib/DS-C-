#include<iostream>
using namespace std;
int main(){
    int variable = 45;
    int *pointer = &variable;
    cout<<"Value of Variable : "<<variable<<endl;
    cout<<"Address of variable : "<<pointer<<endl;
    //we can also print the address of the variable like this
    cout<<"Address of variable using &variable : "<<&variable<<endl;
    cout<<"Value of variable by using *pointer : "<<*pointer<<endl;
}