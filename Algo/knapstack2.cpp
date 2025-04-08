#include<iostream>
using namespace std;

    struct knap{
        int value,weight;
    };

        void Sort(knap k[],int n){
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    double r1 = (double)k[i].value/k[i].weight;
                    double r2 = (double)k[j].value/k[j].weight;
                    if(r2 > r1){
                        knap t = k[i];
                            k[i] = k[j];
                            k[j] = t;
                    }
                }
            }
        }

    double knapstack(knap k[],int n,int c){

        Sort(k,n);
        double total = 0.00;

        for(int i=0;i<n;i++){
            if(c == 0) break;
             if(k[i].weight <= c){
                total += k[i].value;
                c -= k[i].weight;
             }
             else{
                total += k[i].value * (c/k[i].weight);
                c=0;
             }
        }
        return total;

    }

int main(){
    knap k[] = {{300,23},{120,20},{500,12},{60,50},{80,25}};
    int maxcapacity = 80;
    double ans = knapstack(k,5,maxcapacity);
    cout<<ans;
}