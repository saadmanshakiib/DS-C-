#include<iostream>
using namespace std;
    void mergesort(int a[],int low,int mid,int high){
        int n1 = mid-low+1;
        int n2 = high-mid;
        int a1[n1];
        int a2[n2];

        for(int i=0;i<n1;i++) a1[i] = a[low+i];
        for(int j=0;j<n2;j++) a2[j] = a[mid+1+j];

        int i=0,j=0,k=low;
        while(i<n1 &&j<n2){
            if(a1[i] <= a2[j]){
                a[k] = a1[i];
                i++;
            }
            else{
                a[k] = a2[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            a[k] = a1[i];i++,k++;
        }
        while(j<n2){
            a[k] = a2[j];j++,k++;
        }

    }
void merge(int a[],int low,int high){
    int mid = (low+high)/2;
    merge(a,low,mid);
    merge(a,mid+1,high);
    mergesort(a,low,mid,high);
}
int main(){
    int a[10] = {11,12,34,67,55,77,89,98,5,43};
    merge(a,0,9);
}