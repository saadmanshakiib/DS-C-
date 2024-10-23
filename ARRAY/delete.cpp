#include<iostream>
using namespace std;

int main(){

    int array[] = {12,56,43,22,78,11};
    int arraysize = sizeof(array)/sizeof(array[0]);
    cout<<"Before Deleteing : ";
    for(int i=0;i<arraysize;i++)
    cout<<" "<<array[i];
    int index = 2;
    int array2[arraysize];
    cout<<endl;

    for(int i=0;i<index;i++){
        array2[i] = array[i];
    }
    for(int i=index+1,j=index;i<arraysize,j<arraysize-1;i++,j++){
        array2[j] = array[i];
    }
    arraysize--;

cout<<"\nAfter deleting : ";
for(int i=0;i<arraysize;i++)
   cout<<" "<<array2[i];

}
    
