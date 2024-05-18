#include<iostream>
#include<vector>
using namespace std;

int main(){

int vertex,edges;
// here vertex will consider from 0 to the (vertex-1) that you entered
cout<<"enter the number of vertex: ";
cin>>vertex;
cout<<endl<<"enter the number of edges: ";
cin>>edges;
cout<<endl;

//in directed graph u-v equals edge is from (u to v) not (v to u)also.
//in weighted graph in place of 1 we enter the weight of that edge in matrix
//for edges
int u,v,weight;

// 2D adjacency matrix declaration
vector<vector<int> >AdjMat(vertex,vector<int>(vertex,0));

for(int i=0;i<edges;i++){
    cin>>u>>v>>weight;
    AdjMat[u][v]=weight;
}

// printing adjacency matrix

cout<<"printing adjacency matrix"<<endl;
for(int i=0;i<vertex;i++){
  for(int j=0;j<vertex;j++){
    cout<<AdjMat[i][j]<<" ";
  }
  cout<<endl;
}

  return 0;
}


