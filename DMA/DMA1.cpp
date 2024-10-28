#include<iostream>
using namespace std;
int main(){
    int number =67;
    int *pointer;
    pointer = new int;
    *pointer = number;
    cout<<"Value : "<<*pointer<<endl;
    free(pointer);
    cout<<"Value : "<<*pointer<<endl;// now it will print garbage value because we have freed the value of number  
}