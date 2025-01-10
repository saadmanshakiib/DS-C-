 #include<iostream>
 using namespace std;
 class queue{
    public:
    int front,rear,size,*a;
    queue(int n){
        a = new int[n];
        size = n;
        front =rear = -1;
    }
    bool isEmpty(){ return front == -1;}
    bool isFull(){ return (rear+1)%size == front;}

    void push(int x){
        if(isEmpty()){
            front = rear = 0;
            a[0] = x;
          return;
        }
        else if(isFull()){
            cout<<"Full"<<endl;
        }
        else{
            rear = (rear+1)%size;
            a[rear] = x;
            cout<<"pushed"<<endl;
        }
    }
    void pop(){
        if(isEmpty()){cout<<"Empty";}
        else if(front==rear){
            front=rear=-1;
            cout<<"popped"<<endl;
        }
        else{
            front = (front+1)%size;
            cout<<"popped"<<endl;
        }
    }
    void print(){
        for(int i= front+1;i<size;i++){
            cout<<" "<<a[i];
        }
        cout<<endl;
    }

 };
 int main(){
    queue q(5);
    q.push(11);
    q.push(23);
    q.push(21);
    q.push(34);
    q.push(90);
    q.print();
    q.pop();
    q.pop();
    q.print();
    q.push(17);
    q.push(12);
    q.print();
 }