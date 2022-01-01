#include <bits/stdc++.h>
#define V 5
using namespace std;

// Adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbours of
// a vertex in the graph.

/*
	Advantages: 
	- saves space: O(V + E)
	- adding an edge and vertex both takes O(1) time

	Disadvantages:
	- Queries: whether there is an edge from vertex u to v are not efficient and can be done O(V)
	- Time taken to remove an edge takes O(E) time
	- Time taken to remove an vertex takes O(V + E) time
*/

void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].emplace_back(v);
}

int main() {
	vector<int> graph[V];

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 3, 2);
    addEdge(graph, 3, 4);

    cout << "Adjacency List: " << endl;
    for (int i=0; i < V; ++i)
    {
        cout << i;
        for (int j=0; j < graph[i].size(); ++j)
            cout << " -> " << graph[i][j];
        cout << endl;
    }
	return 0;
}