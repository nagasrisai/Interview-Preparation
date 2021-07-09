#include<bits/stdc++.h>
using namespace std;
class Graph{
    public:
    
    map<int,list<int>>vert;
    map<int,bool>visited;
    void addEdge(int u, int v);
    void print();
    void BFS();
};

void Graph::addEdge(int u, int v){
    vert[u].push_back(v);
    vert[v].push_back(u);
    
}

void Graph::BFS(){
    cout<<"The BFS is ";
    list<int>q;
    for(int i=0; i<5; i++){
        visited[i]=false;
    }
    visited[0]=true;
    q.push_back(0);
    list<int>::iterator i;
    while(!q.empty()){
        int s=q.front();
        cout<<s<<" ";
        q.pop_front();
        for(i=vert[s].begin(); i!=vert[s].end(); i++){
            if(!visited[*i]){
            q.push_back(*i);
            visited[*i]=true;
            }
        }
        
        
    }
    
}

void Graph::print(){
    for(int i=0; i<5; ++i){
        cout<<i;
        for(auto x:vert[i]){
            cout<<"-->"<<x;
        }
        cout<<endl;
    }
}



int main(){
    Graph g;
    g.addEdge(0, 1);
    g.addEdge( 0, 4);
    g.addEdge( 1, 2);
    g.addEdge( 1, 3);
    g.addEdge( 1, 4);
    g.addEdge( 2, 3);
    g.addEdge( 3, 4);
    g.print();
    g.BFS();
    return 0;
}
