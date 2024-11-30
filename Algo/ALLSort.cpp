#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

void insertionsort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void bubblesort(int a[],int s){
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(a[j] > a[j+1]){
                int t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
            }
        }
    }
}

void selectionsort(int a[],int s){
    for(int i=0;i<s-1;i++){
        int min = i;
        for(int j=i+1;j<s;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
       if(min!=i){
         int t = a[i];
        a[i] = a[min];
        a[min] = t;
       }
    }
    
}
void print(int a[],int s){
    for(int i=0;i<s;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}
int main(){
    int a[10] = {12,32,11,5,7,43,78,86,43,21};
    selectionsort(a,10);
    cout<<"\nAfter selection sort : ";
    print(a,10);
    bubblesort(a,10);
    cout<<"\nAfter bubble sort : ";
    print(a,10);
    insertionsort(a,10);
    cout<<"\nAfter insertion sort : ";
    print(a,10);
}