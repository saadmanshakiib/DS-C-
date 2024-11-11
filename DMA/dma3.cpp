#include<iostream>
using namespace std;
int main(){
    int number,*pointer,sum=0;
    cout<<"Enter elements number : ";
    cin>>number;
    pointer = new (nothrow)int[number]; //called an array with number size user input
    if(pointer==NULL) cout<<"Error!"<<endl;
    else{
        cout<<"\nEnter elements : ";
        for(int i=0;i<number;i++){
            cin>> *(pointer+i);
            sum += *(pointer+i);
        }
        cout<<"\nSum of the element : "<<sum<<endl;
        delete [] pointer;//memory freed up
    }

}