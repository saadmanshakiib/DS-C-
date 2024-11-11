#include<iostream>
using namespace std;
int main(){
    int a[5] = {3,4,6,7,8};
    int *p=a;
    // a holds the first elements memory address 
    // p = holds the first elements memory address
    cout<<"First elements memory address using array name : "<<a<<endl;
    cout<<"First elements memory address using p : "<<p<<endl;
        cout<<"second elements memory address using (a+1) : "<<(a+1)<<endl;
        cout<<"Third elements memory address using (a+1) : "<<(a+2)<<endl;
        cout<<"Fourth elements memory address using (a+1) : "<<(a+3)<<endl;
        cout<<"Fifth elements memory address using (a+1) : "<<(a+4)<<endl;
cout<<endl;
                cout<<"second elements value using (a+1) : "<<*(a+1)<<endl;
                cout<<"Third elements value using (a+1) : "<<*(a+2)<<endl;
                cout<<"Fourth elements value using (a+1) : "<<*(a+3)<<endl;
                cout<<"Fifth elements value using (a+1) : "<<*(a+4)<<endl;
cout<<endl;
                cout<<"second elements value using a[1] : "<<a[1]<<endl;
                cout<<"Third elements value using a[2] : "<<a[2]<<endl;
                cout<<"Fourth elements value using a[3] : "<<a[3]<<endl;
                cout<<"Fifth elements value using a[4] : "<<a[4]<<endl;
cout<<endl;
//exceptional case below : 
                cout<<"second elements value using p[1] : "<<p[1]<<endl;
                cout<<"Third elements value using p[2] : "<<p[2]<<endl;
                cout<<"Fourth elements value using p[3] : "<<p[3]<<endl;
                cout<<"Fifth elements value using p[4] : "<<p[4]<<endl;
cout<<endl;

                cout<<"second elements memory address using &p[1] : "<<&p[1]<<endl;
                cout<<"Third elements memory address using &p[2] : "<<&p[2]<<endl;
                cout<<"Fourth elements memory address using &p[3] : "<<&p[3]<<endl;
                cout<<"Fifth elements memory address using &p[4] : "<<&p[4]<<endl;
cout<<endl;
                cout<<"second elements value using *(p+1) : "<<*(p+1)<<endl;
                cout<<"Third elements value using *(p+2) : "<<*(p+2)<<endl;
                cout<<"Fourth elements value using *(p+3) : "<<*(p+3)<<endl;
                cout<<"Fifth elements value using *(p+4) : "<<*(p+4)<<endl;
cout<<endl;
cout<<endl;

}