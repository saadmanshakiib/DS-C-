#include<iostream>
using namespace std;
      struct person{
string name;
int age;
float salary;

          struct Address{
    string street;
    int roadno;
};
Address address;
}a;

int main(){
  person x;
  x.name="sadman";
  x.age=22;
  x.salary = 35000;
  person *p = &a;
  cout<<"Name : "<<x.name<<endl; 
  cout<<"Age : "<<x.age<<endl;
  cout<<"Salary : "<<x.salary<<endl;
  cout<<"&a = "<<p<<endl;

x.address.street = "Basundhara";
x.address.roadno = 34;
cout<<"Street no : "<<x.address.street;
cout<<"\nRoad no : "<<x.address.roadno<<endl;

}