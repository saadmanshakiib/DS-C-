#include<iostream>
using namespace std;
class heap{
    public:
    int *a,total_size,size;
    heap(int s){
        a = new int[s];
        size = 0;
        total_size = s;
    }
    void insert(int x){
        if(size == total_size){
        cout<<"Heap Full";
        return;
        }
        a[size] = x;
        int index = size;
        size++;

        //correct pos check

        while(index > 0 && a[(index-1)/2] < a[index]){
            swap(a[index],a[(index-1)/2]);
            index = (index-1)/2;
        }
    }
    void print(){
        for(int i = 0;i<size;i++){
            cout<<" "<<a[i];
        }
    }

};
int main(){
heap h(6);
h.insert(4);
h.insert(14);
h.insert(11);
h.insert(12);
h.insert(67);
h.insert(45);
h.print();
}