#include <iostream>
using namespace std;
int main(){
    int taka[] = {1000,500,200,100,50,20,10,5,2,1};
    int n = 10;
    int amount;
    cin>>amount;
    for(int i=0;i<10;i++){
        int c = amount/taka[i];
        if(c > 0){
            cout<<taka[i]<<" note lagbe : "<<c<<" ti"<<endl;
        }
        amount %= taka[i];
       
    }
}