#include<iostream>
using namespace std;
class heap{
public:
int elements,totalsize,*a;
heap(int s){
    totalsize = s;
    elements = 0;
    a = new int[s];
}
    void insert(int data){
        if(totalsize == elements){
            cout<<"Full"<<endl;
            return;
        }

        a[elements] = data;
        int i = elements;
                elements++;

        while(i > 0 && a[(i-1)/2] < a[i]){
            swap(a[(i-1)/2],a[i]);
            i = (i-1)/2;
        }
    }
        void print(){
            for(int i = 0;i<elements;i++){
                cout<<" "<<a[i];
            }
        }

    void heapify(int i){
        int large = i;
        int l = 2*i+1;
        int r = 2*i+2;

        if(l < elements && a[l] > a[large]){
            large = l;
        }
        if(r < elements && a[r] > a[large]){
            large = r;
        }

        if(large != i){
            swap(a[i],a[large]);
                heapify(large);
        }
    }

            void dlt(){
                a[0] = a[elements-1];
                elements--;
                heapify(0);
            }
};
int main(){
heap h(5);
h.insert(23);
h.insert(25);
h.insert(42);
h.insert(12);
h.insert(13);
h.print();
h.dlt();
cout<<endl;
h.print();
}