#include<iostream>
using namespace std;
class heap{
public:
int size,total,*a;
heap(int s){
    size = 0;
    total = s;
    a = new int[s];
}
    void add(int x){
        if(size == total) cout<<"Full"<<endl;
        a[size] = x;
        int i = size;
        size++;

            while(i > 0 && a[(i-1)/2] < a[i]){
                swap(a[i],a[(i-1)/2]);
                i = (i-1)/2;
            }
    }

            void heapify(int i){
                int large = i;
                int l = 2*i+1;
                int r = 2*i+2;

                if(i < total && a[l] > a[large])
                large = l;
                if(i < total && a[r] > a[large])
                large = r;

                if(large!=i){
                    swap(a[i],a[large]);
                    heapify(large);
                }
            }

        void dlt(){
            a[0] = a[total-1];
            size--;
            heapify(0);
        }
         void print(){
            for(int i=0;i<size;i++){
                cout<<" "<<a[i];
            }
        }
};
int main(){
heap h(8);
h.add(34);
h.add(12);
h.add(45);
h.add(11);
h.add(8);
h.add(88);
h.add(87);
h.add(2);
h.print();
h.dlt();
cout<<endl;
//h.print();
}