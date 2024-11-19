#include<iostream>
using namespace std;
struct student{
int roll;
string name;
float marks;
struct student *node;
};
int main(){
student s1,s2,s3;
s1.name = "sadman";
s1.roll = 164;
s1.marks  = 55;
s1.node = &s2;

s2.name = "sakib";
s2.marks =  89;
s2.roll = 70;
s2.node = &s3;

s3.name = "siam";
s3.marks =  45;
s3.roll = 23;
s3.node = NULL;
cout<<s1.name<<endl;
cout<<s1.roll<<endl;
cout<<s1.marks<<endl;

cout<<s2.name<<endl;
cout<<s2.roll<<endl;
cout<<s2.marks<<endl;

cout<<s3.name<<endl;
cout<<s3.roll<<endl;
cout<<s3.marks<<endl;

cout<<s1.node<<endl;
cout<<s2.node<<endl;
cout<<s3.node<<endl;
}