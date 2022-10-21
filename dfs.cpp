#include <iostream>
#include <vector>
using namespace std;
#define max 1000
bool visited[max];

void DFS(auto v, int start){
  for(auto n: v[start]){
    if(!visited[n]){
        DFS(v, n);
    }
  } 
  visited[start]=true;
  cout << start <<" "; 

}

int main(){
    int tNode, subNode;
    int temp;
    
  vector<vector<int>> v;
    cout<<"Enter the total number of nodes :";
    cin>>tNode;
    for(int i=0; i<tNode; i++){ 
        vector<int>root;
        cout<<"the number of connected node with node"<<i<<" : ";
        cin >> subNode;
       
        for(int j=0; j<subNode; j++){
            cout<<"connected  nodes : ";
            cin>>temp;
            root.push_back(temp); 
        }
        v.push_back(root);
    }

    cout <<"DFS: ";
    DFS(v,0);

    return 0;
}
