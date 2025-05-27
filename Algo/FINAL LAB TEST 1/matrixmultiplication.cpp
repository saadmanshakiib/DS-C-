#include<iostream>
using namespace std;
int main(){
    int a[4][3]={
        {12,34,2},{45,62,11},{65,32,10},{12,11,8}
    };
    int b[3][4]={
        {11,23,42,3},{42,11,67,10},{14,10,6,8}
    };
    int c[4][4] = {0};

cout<<"Matrix A : "<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        cout<<" "<<a[i][j];
    }
    cout<<endl;
}

cout<<"Matrix B : "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<" "<<b[i][j];
    }
    cout<<endl;
}

cout<<"Multiplication possibile : "<<endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k = 0 ;k<3;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout<<"Matrix C : "<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<" "<<c[i][j];
    }
    cout<<endl;
}

}