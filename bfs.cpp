#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define max 1000
bool visited[max];

void BFS(vector<vector<int>> v)
{
	queue<int> q;
	int start = 0;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		cout << q.front() << ' ';
		for (auto n : v[q.front()])
		{
			if (!visited[n])
			{
				q.push(n);
				visited[n] = 1;
			}
		}
		q.pop();
	}
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

    cout <<"BFS: ";
    BFS(v);

    return 0;
}
