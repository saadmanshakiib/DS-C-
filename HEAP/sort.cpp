#include<iostream>
using namespace std;
        void heapify(int a[],int i,int n){
            int large = i;
            int l = 2*i+1;
            int r = 2*i+2;

            if(l < n && a[l] > a[large])
            large = l;
            if(r < n && a[r] > a[large])
            large = r;

            if(large != i){
                swap(a[i],a[large]);
                heapify(a,large,n);
            }
        }
        void sort(int a[],int n){
            for(int i=n-1;i>0;i--){
                swap(a[i],a[0]);
                heapify(a,0,i);
            }
        }
        void build(int a[],int n){
            for(int i= n/2-1;i>=0;i--){
                heapify(a,i,n);
            }
        }
        void print(int a[],int n){
            for(int i=0;i<n;i++){
                cout<<" "<<a[i];
            }
        }

        // 67 44 12 89 31 23 11 45 32 55 
int main(){
int a[10] = {11,44,67,89,31,23,12,45,32,55};
print(a,10);
cout<<endl;
build(a,10);
print(a,10);
sort(a,10);cout<<endl;
print(a,10);

}