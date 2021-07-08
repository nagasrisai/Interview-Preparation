#include<bits/stdc++.h>
using namespace std;
int vert[20][20];
void add_edge(int u, int v){
    vert[u][v]=1;
    vert[v][u]=1;
}
void print(int v){
    for(int i=0;i<v; i++){
        for(int j=0; j<v; j++){
            cout<<vert[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
     int v = 6;    //there are 6 vertices in the graph
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);
   print(v);
}
