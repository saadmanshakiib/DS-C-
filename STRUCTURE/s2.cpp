#include<iostream>
using namespace std;
struct employeerecord{
char name[10];
int age;
float salary;
}a;
int main(){
  employeerecord x = {"sadman",22,50000.50}; 
  employeerecord *p = &a;
  cout<<"Name : "<<x.name<<endl; 
  cout<<"Age : "<<x.age<<endl;
  cout<<"Salary : "<<x.salary<<endl;
  cout<<"&a = "<<p<<endl;

}