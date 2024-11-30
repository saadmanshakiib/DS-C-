#include<iostream>
using namespace std;
void selectionsort(int a[],int s){
    for(int i=0;i<s-1;i++){
        int min = i;
        for(int j=i+1;j<s;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            int t = a[i];
            a[i] = a [min];
            a[min] = t;
        }
    }
}
void print(int a[],int s){
    for(int i=0;i<s;i++){
        cout<<" "<<a[i];
    }
}
int main(){
int a[10] = {10,8,2,3,9,11,1,6,5,4};
int s = sizeof(a)/sizeof(a[0]);
selectionsort(a,s);
print(a,s);

}