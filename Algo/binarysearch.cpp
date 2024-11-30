#include<iostream>
using namespace std;
int binarysearch(int a[],int S,int k){
    int s=0;
    int e = S-1;
    int m;
    while(s<=e){
        m = (s+e)/2;
        if(a[m] == k)return m;
        else if(a[m] < k){
            s = m+1;
        }
        else if(a[m] > k){
            e = m-1;
        }
    }
    return -1;
}
int main(){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int k;cin>>k;
int s = sizeof(a)/sizeof(a[0]);
int r = binarysearch(a,s,k);
cout<<"\nFound at "<<r+1<<endl;
}