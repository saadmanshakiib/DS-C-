#include<iostream>
using namespace std;

void increase(void *a , int size){
    if(size == sizeof(int)){
        int *p;
        p = (int*)a; // typecasting
        ++(*p);
    }
    else if(size == sizeof(char)){
        char *p;
        p = (char*)a;
        ++(*p);
    }
}

int main(){
    int a=90;
    char c = 'b';
    cout<<"\nInitial value of a = "<<a<<endl;
        cout<<"\nInitial value of c = "<<c<<endl;
    increase(&a,sizeof(a));
    increase(&c,sizeof(c));
    cout<<"\nIncreased value of a = "<<a<<endl;
    cout<<"\nIncreased value of c = "<<c<<endl;
}