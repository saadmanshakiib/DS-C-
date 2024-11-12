#include<iostream>
#include<string.h>
using namespace std;
struct person{
    char name[6];
    int age;
    person *child;
};
int main(){
person p,*c;
strcpy(p.name,"Sadman");
p.age = 22;
cout<<"Person Name : "<<p.name<<endl;
cout<<"Person Age : "<<p.age<<endl;
/////////////
c = p.child = new person[2];// person sadman has 2 child
strcpy(c[0].name,"safrin");
c[0].age = 30;
cout<<"Person 1st child Name : "<<c[0].name<<endl;
cout<<"Person 1st child age : "<<c[0].age<<endl;

c[1].age = 23;
strcpy(c[1].name,"Zidan");//2nd child of sadmnan
cout<<"Person 2nd child Name : "<<c[1].name<<endl;
cout<<"Person 2nd child age : "<<c[1].age<<endl;
/////////////
c = c[0].child = new person[2];//c[0] or safrin has a child
c[0].age=6;
strcpy(c[0].name,"saiyara");
cout<<"Person 1st childs 1st child Name : "<<c[0].name<<endl;
cout<<"Person 1st childs 1st child age : "<<c[0].age<<endl;
c[1].age = 4;
strcpy(c[1].name,"saima");
cout<<"Person 1st childs 2nd child Name : "<<c[1].name<<endl;
cout<<"Person 1st childs 2nd child age : "<<c[1].age<<endl;
}