#include<iostream>
using namespace std;
void increase(void *p, int size){
    if(size == sizeof(int)){
        int *pint;
        pint = (int*)p;
        ++(*pint);
    }
    else if(size == sizeof(char)){
        char *pchar;
        pchar = (char*)p;
        ++(*pchar);
    }
}

int main(){
    int a = 90;
    char c  = 's';
    increase(&a,sizeof(a));
    increase(&c,sizeof(c));
    cout<<"After increasing : "<<a<<endl;
    cout<<"After increasing : "<<c<<endl;


}