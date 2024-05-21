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

vector<pair<int,int> >AdjList[vertex];
int u,v,w;

for(int i=0;i<edges;i++){
    cin>>u>>v>>w;
    AdjList[u].push_back(make_pair(v,w));
}

//print the adjacency list

cout<<endl<<"printing adjacency list:"<<endl;
for(int i=0;i<vertex;i++){
  cout<<i<<" -> ";
  for(int j=0;j<AdjList[i].size();j++){
    cout<<"("<<AdjList[i][j].first<<","<<AdjList[i][j].second<<")"<<"  ";
  }
  cout<<endl;
}


  return 0;
}

