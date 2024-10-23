#include<iostream>
using namespace std;
int main(){
    int a[2][3] = {
        {3,4,5},{1,8,9}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"&a = "<<&a<<endl;
    cout<<"Memory address of the 2nd element = "<<&a[1]<<endl;

}