#include<iostream>
using namespace std;
int linearsearch(int a[],int s,int k){
for(int i=0;i<s;i++){
    if(a[i]==k){
        return i+1;
    }
}
return -1;
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
    for(int i=0;i<s;i++){
        cout<<" "<<a[i];
    }
}
int binarysearch(int a[],int S,int k){
int s=0;int e=S-1;int m;
while(s<=e){
    m = (s+e)/2;
    if(a[m] == k){
        return m;
    }
    else if(a[m] > k){
        e = m-1;
    }
    else if(a[m] < k){
        s = m+1;
    }
}
}
int main(){
int a[7] = {23,12,56,32,8,2};
int s = sizeof(a)/sizeof(a[0]);
s--;
cout<<s<<endl;
int k = 56;
int r = linearsearch(a,s,k);
cout<<"\nAfter linear search found at "<<r<<endl;
bubblesort(a,s);
int r2 = binarysearch(a,s,k);
r2++;
cout<<"\nAfter binary serach found at : "<<r2<<endl;
}
