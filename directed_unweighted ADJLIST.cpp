#include<iostream>
#include<vector>
using namespace std;

//weighted_undirected

int main(){

int vertex,edges;
// here vertex will consider from 0 to the (vertex-1) that you entered
cout<<"enter the number of vertex: ";
cin>>vertex;
cout<<endl<<"enter the number of edges: ";
cin>>edges;
cout<<endl;

vector<int>AdjList[vertex];
int u,v;

for(int i=0;i<edges;i++){
    cin>>u>>v;
    AdjList[u].push_back(v);
}

//print the adjacency list

cout<<endl<<"printing adjacency list:"<<endl;
for(int i=0;i<vertex;i++){
  cout<<i<<" -> ";
  for(int j=0;j<AdjList[i].size();j++){
    cout<<AdjList[i][j]<<" ";
  }
  cout<<endl;
}


  return 0;
}




