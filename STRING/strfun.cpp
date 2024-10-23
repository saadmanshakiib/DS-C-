#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main(){
char  s1[] = "sadman";
char s2[] ="sakib";
cout<<"After strcat(s1,s2) "<<strcat(s1,s2)<<endl;//joins two strings
cout<<"New Value of s1  = "<<s1<<endl;
cout<<"Strcmp() : "<<strcmp(s1,s2)<<endl;//compares both strings
cout<<"Strcpy() : "<<strcpy(s1,s2)<<endl;//copies s2 into s1
cout<<"New Value of s1  = "<<s1<<endl;//after coping the new value of s1 is updated
}