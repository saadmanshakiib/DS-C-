#include<iostream>
using namespace std;
void printarray(int a[],int size){
    cout<<"\nArray : ";
    for(int i=0;i<size;i++){
        cout<<" "<<a[i];
    }
}


void insert(int a[] , int size){
cout<<"\nEnter the element you want to insert : ";\
int element;
cin>>element;
cout<<"\nEnter the index you want to insert : ";
int index; cin>>index;
if(index == (size+1)){
    a[size++] = element;
    printarray(a,size);
}
else {
    for(int i = size; i > index-1; i--){
        a[i] = a[i-1];
    }
    a[index-1] = element;
    size++;
    printarray(a,size);
}
}

void Delete(int a[],int size){
cout<<"\nEnter the index you want to delete : ";
int index; cin>>index;
for(int i = index-1 ; i<size; i++){
    a[i] = a[i+1];
}
size--;
printarray(a,size);
}

int main(){

    int a[6];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<6;i++){
        cin>>a[i];
    }
    
int size = sizeof(a)/sizeof(a[0]);
printarray(a,size);
//insert(a,size);
Delete(a,size);
}

   