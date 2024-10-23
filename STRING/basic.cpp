#include<iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter the string : ";
    string word,word2;
    getline(cin,word);
    cout<<"Entered String : "<<word<<endl;
    cout<<"\nLength of the string : "<<word.length()<<endl;
}