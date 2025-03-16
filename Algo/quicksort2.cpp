#include<iostream>
using namespace std;

    int partition(int a[],int low,int high){
        int pivot = a[high];
        int i = low-1;
        for(int j=low;j<high;j++){
            if(a[j] < pivot){
                i++;
                swap(a[i],a[j]);
            }
        }
        swap(a[i+1],a[high]);
        return i+1;
    }

void quicksort(int a[],int low,int high){
    if(low<high){
        int pivot = partition(a,low,high);
    quicksort(a,low,pivot-1);
    quicksort(a,pivot+1,high);
    }
}
int main(){
    int a[8] = {11,45,32,67,89,76,44,12};
    quicksort(a,0,7);
}