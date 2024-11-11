#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int t;
     t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int a=90,b=69;
    cout<<"\nInitial value a = "<<a<<"\tb = "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping -> a = "<<a<<"\tb = "<<b<<endl;
}