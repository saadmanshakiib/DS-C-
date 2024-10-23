#include<iostream>
using namespace std;
int main(){
    int a[5] = {23,12,11,90,22};
    int index=3;
    for(int i=index;i<5;i++){
        a[i] = a[i+1];
    }
    cout<<"After Delete : ";
    for(int i=0;i<4;i++){
        cout<<" "<<a[i];
    }
}