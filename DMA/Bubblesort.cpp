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
    int c = 1;
    while(c<n){
        for(int i=0;i<n-c;i++){
            if(a[i] > a[i+1]){
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
        c++;
    }
     cout<<"\nSorted Array : ";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }

}