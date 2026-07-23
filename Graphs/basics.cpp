#include<bits/stdc++.h>
using namespace std;

int main(){
    int V;
    cout << "Enter no. of Vertices: ";
    cin >> V;
    int E;
    cout << "Enter no. of Edges: ";
    cin >> E;
    // cout << endl;

    vector<vector<int>> edges(E, vector<int> (2));
    vector<vector<int>> adj(V);
    // taking input 

    for(int i = 0; i<E; i++){
        for(int j = 0; j<2; j++){
            cin >> edges[i][j];
        }
    }
    // making adjacency list

    for(int i=0;i<E;i++){

        vector<int> edge = edges[i];

        int src=edge[0];
        int dest=edge[1];

        adj[src].push_back(dest);
        adj[dest].push_back(src);
    }

    // Printing Adjacency List
    
    for(int i = 0; i < adj.size(); i++){
        cout << i << " -> ";

        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }   
    return 0;

}