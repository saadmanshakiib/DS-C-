#include<iostream>
using namespace std;
int main(){
    int array[5] = {34,12,55,11,10};
    cout<<"Enter the index in which you want to insert : ";
    int pos;
    cin>>pos;
    if(pos<5){
        cout<<"\nEnter the element you want to  insert : ";
        int element;
        cin>>element;
        for(int i=4;i>=pos;i--){
            array[i+1] = array[i];
            array[pos] = element;
        }
        cout<<"\nNew Array : ";
        for(int i=0;i<6;i++){
            cout<<" "<<array[i];
        }
    }
    else{
        cout<<"\nArray index out of bounds";
    }
}