#include<iostream>
using namespace std;
int *am(int a[],int b[],int size){
    int *pointer = new (nothrow)int[size];
    for(int i=0;i<size;i++){
        pointer[i] = a[i] * b[i];
    }
    return pointer;
}
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<" "<<a[i];
    }
}
int main(){
    int *pointer;
    int a[5] = {1,2,3,4,5},b[5]={5,6,7,8,9};
        pointer = am(a,b,5);
        print(pointer,5);
        delete [] pointer;
}