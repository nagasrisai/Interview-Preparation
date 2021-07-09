#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    map<int, list<int>>vert;
    map<int,bool>visited;
    void addEdge(int u, int v);
    void print();
    bool iscyclic();
    bool iscyclicutil(int v, int parent);
};
void Graph:: addEdge(int u, int v){
    vert[u].push_back(v);
    vert[v].push_back(u);
}

bool Graph::iscyclicutil(int v,int parent){
    visited[v]=true;
    list<int>::iterator i;
    for(i=vert[v].begin(); i!=vert[v].end();++i){
        if(!visited[*i]){
            if(iscyclicutil(*i,parent)){
                return true;
            }
        }
        else if(*i!=parent){
            return true;
        }
    }
    return false;
}

bool Graph::iscyclic(){
    for(int i=0; i<5; i++){
        visited[i]=false;
    }
    for(int i=0; i<5; i++){
        if(!visited[i]){
            if(iscyclicutil(i,-1)){
                return true;
            }
        }
    }
    return false;
}

int main(){
     Graph g1;
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.iscyclic()?
    cout << "Graph contains cycle\n":
       cout << "Graph doesn't contain cycle\n";
       return 0;
}
