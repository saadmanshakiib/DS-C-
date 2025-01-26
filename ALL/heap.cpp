#include<iostream>
using namespace std;
class heap{
public:
int size,total,*a;
heap(int s){
    total = s;
    size=0;
    a = new int[s];
}
void add(int x){
if(size==total) cout<<"Full"<<endl;
a[size] = x;
int i = size;
size++;

        while(i > 0 && a[(i-1)/2] < a[i]){
            swap(a[i],a[(i-1)/2]);
            i = (i-1)/2;
        }
}
void print(){
    for(int i=0;i<size;i++){
        cout<<" "<<a[i];
    }
}
};
int main(){
heap h(6);
h.add(23);
h.add(32);
h.add(10);
h.add(11);
h.add(77);
h.add(9);
h.print();
}