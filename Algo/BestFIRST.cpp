#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node{

int id;
int heuristic_value;
vector<node*> neighbors;


    node(int id,int heuristic_value){
        this->id = id;
        this->heuristic_value = heuristic_value;
    }
};

    bool compareByHeuristicValue(node* node1, node* node2){return node1->heuristic_value < node2->heuristic_value;}

    void bfs(node* start,node* goal,int total_nodes){
    vector<node*> nodes;
    vector<bool> isVisited(total_nodes+1 , false); // isVisited name er array jetar by default all values false
       
    nodes.push_back(start);

        while(!nodes.empty()){
            auto closest = min_element(nodes.begin(),nodes.end(),compareByHeuristicValue);// holds the address of the value having lowest heuristic value
            node* current = *closest;// holds the actual value of that address
            nodes.erase(closest);// remove kora hoise jate bar bar ei same node ke niye experiment na kora hoy
            
            cout<<"Now visiting : "<<current->id<<endl;
            cout<<"Heuristic Value : "<<current->heuristic_value;

            if(current == goal){
                cout<<"\nGoal Found!"<<endl;
                cout<<goal->id<<endl;
                return;
            }

            isVisited[current->id+1] = true;

            for(int i=0;i< current->neighbors.size();i++){
                node* t = current->neighbors[i];
                if(!isVisited[t->id+1]){ // checking if the neighbor is already visited or not
                    nodes.push_back(t);
                }
            }
            cout<<endl;
            //cout<<"\tGoal Not Found"<<endl;

            cout<<" "<<current->id<<"-> ";// to keep track of paths
        }
    }

int main(){
    node a(1,40);
    node b(2,32);
    node c(3,25);
    node d(4,35);
    node e(5,19);
    node f(6,17);
    node g(7,0);
    node h(8,10);

    a.neighbors = {&d,&c,&b};
    b.neighbors = {&a,&e};
    c.neighbors = {&a,&e,&f};
    d.neighbors = {&a,&f};
    e.neighbors = {&c,&b,&h};
    f.neighbors = {&d,&g,&c};
    g.neighbors = {&h,&f};
    h.neighbors = {&e,&g};

    bfs(&a,&g,8);

}