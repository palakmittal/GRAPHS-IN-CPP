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
    AdjList[v].push_back(make_pair(u,w));
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


/*   example

enter the number of vertex: 5

enter the number of edges: 6

0 1 6
0 2 4
1 2 3
1 3 8
3 4 5
2 4 2
printing adjacency list:
0 -> (1,6)  (2,4)  
1 -> (0,6)  (2,3)  (3,8)  
2 -> (0,4)  (1,3)  (4,2)  
3 -> (1,8)  (4,5)  
4 -> (2,2)  (3,5)


*/