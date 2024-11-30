#include<iostream>
using namespace std;
int main(){
    cout<<"Enter array index number : ";
    int n;
    cin>>n;
    int a[n];
    cout<<"\nEnter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nArray elements : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }

    for(int j=0;j<n;j++)
        for(int i=0;i<n-j;i++){
            if(a[i] > a[i+1]){
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
     cout<<"\nSorted Array : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}