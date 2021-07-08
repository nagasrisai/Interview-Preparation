#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>graph[], int v,int e){
    graph[e].push_back(v);
    graph[v].push_back(e);
}

void printGraph(vector<int>graph[],int v){
    for(int i=0; i<v; i++ ){
        cout << "\n Adjacency list of vertex "
             << i << "\n head ";
             for(auto x:graph[i]){
                 cout<<"=>"<<x;
                 
             }
             cout<<'\n';
    }
}

int main(){
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
    return 0;
    
}
