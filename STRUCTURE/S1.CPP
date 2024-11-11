#include<iostream>
using namespace std;
struct employeerecord{
    char name[5];
    int age;
    float salary;
}a;
int main(){
employeerecord b,*c,d[5];
c = &a;
cout<<c<<endl;
}