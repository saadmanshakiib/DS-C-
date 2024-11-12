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

    //main 
    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int t = a[min];
        a[min] = a[i];
        a[i] = t;
    }
    cout<<"\nSorted Array : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }

}