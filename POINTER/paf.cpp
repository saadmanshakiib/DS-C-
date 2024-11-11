#include<iostream>
using namespace std;
void twicearray(int arg[],int length){
    for(int i=0;i<length;i++){
        arg[i] *= 2;
    }
}
void printarray(int arg[],int length){
    for(int i=0;i<length;i++){
        cout<<" "<<arg[i];
    }
    cout<<endl;
}
int main(){
    int a1[3] = {5,10,15};
    int a2[] = {2,4,6,8,10};
     twicearray(a1,3);
     printarray(a1,3);
}