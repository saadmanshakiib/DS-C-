#include<iostream>
#include<string.h>
using namespace std;
struct Person{
    char name[30];
    Person *child;
};
int main(){
Person p,*c;
strcpy(p.name,"Sadman");
c = p.child = new Person[2];
strcpy(c[0].name, "Sokal");
c[0].child = NULL;
strcpy(c[1].name,"Sakib");
c = c[1].child = new Person;
strcpy(c->name,"saad");
c->child = NULL;
cout<<"p.name : "<<p.name<<endl;
cout<<"c[0].name : "<<c[0].name<<endl;
cout<<"c[1].name : "<<c[1].name<<endl;

}