#include<iostream>
using namespace std;
int main(){
    int array[] = {12,45,22,34,11,56};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"Enter the element you want to search : ";
    int element,c=0;
    cin>>element;
    for(int i=0;i<size;i++){
        if(array[i] == element){
                cout<<"Element Found at "<<(i+1)<<" Position"<<endl;
        }
        else{
            c++;
        }
    }
    if(c==size)cout<<"Not Find"<<endl;

}