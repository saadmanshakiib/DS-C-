#include<iostream>
using namespace std;
int main(){
cout<<"Enter the number : "<<endl;
int n;
cin>>n;
    int a = 0;
    int b = 1;
    int next;
    for(int i = 1;i<=n;i++){
        cout<<" "<<a;
        next = a+b;
        a = b;
        b = next;
    }
    
}