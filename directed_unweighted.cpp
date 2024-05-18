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

//in directed graph u-v equals edge is from (u to v) not (v to u).
//for edges
int u,v;

// 2D adjacency matrix declaration
vector<vector<bool> >AdjMat(vertex,vector<bool>(vertex,0));

for(int i=0;i<edges;i++){
    cin>>u>>v;
    AdjMat[u][v]=1;
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


