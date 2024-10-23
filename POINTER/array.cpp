#include<iostream>
using namespace std;
int main(){
    int a[3] = {23,23,12};
    int *p = a;
    //also we can declare like this 
    //int *p;
    // p = &a; where p holds the address and *p holds the value
    cout<<"First elements memory address using *p = "<<*p<<endl;
    cout<<"Memory address of third element : "<<&a[2]<<endl;
    cout<<"First element using *p = "<<*p<<endl;
    cout<<"First elements address using p = "<<p<<endl;
    cout<<"3rd value using p[2] = "<<p[2]<<endl;
    cout<<"3rd values address using &p[2] = "<<&p[2]<<endl;
    cout<<"Third element using *(p+2) = "<<*(p+2)<<endl;
}