#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node(int data){
    this->data = data;
}
};
int main(){
    node *head;
    head = new node(90);
    node *n2;
    n2 = new node(99);
   // n2->data = 99;
    cout<<&n2<<endl;//n2 itself
    cout<<&n2->data<<endl;// next value


}