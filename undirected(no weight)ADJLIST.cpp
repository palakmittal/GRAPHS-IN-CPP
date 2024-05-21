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

vector<int>AdjList[vertex];
int u,v;

for(int i=0;i<edges;i++){
    cin>>u>>v;
    AdjList[u].push_back(v);
    AdjList[v].push_back(u);
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


/*   example

enter the number of vertex: 5

enter the number of edges: 6

0 1
0 2
1 2 
1 3
3 4
2 4
printing adjacency list:
0 -> 1 2 
1 -> 0 2 3 
2 -> 0 1 4 
3 -> 1 4 
4 -> 3 2 


*/