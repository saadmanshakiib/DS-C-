#include<iostream>
using namespace std;
int insert(int array[],int data,int pos,int arraysize){
    int array2[arraysize+1];
    int index = pos-1;
for(int i=0;i<index;i++){
array2[i] = array[i];
}

array2[index] = data;

for(int i=index+1,j=index;i<arraysize+1,j<arraysize;i++,j++){
    array2[i] = array[j];
}

cout<<"\nAfter inserting : ";
    for(int i=0;i<arraysize+1;i++)
    cout<<" "<<array2[i];
}

int main(){
    int array[] = {12,56,43,22,78,11};
    int arraysize = sizeof(array)/sizeof(array[0]);
    cout<<"Before inserting : ";
    for(int i=0;i<arraysize;i++)
    cout<<" "<<array[i];

    insert(array,99,4,arraysize);
    
}