#include <bits/stdc++.h>
#define V 5
using namespace std;

// An adjacency matrix A[V][V] is a 2D array of size V * V where V = Number of vertices in a graph
// This matrix represent with either 0(not edge) and 1(edge)

/*
	Advantages: 
	- Easy to understand and implement
	- adding and removing an edge takes O(1) time
	- Queries: whether there is an edge from vertex u to vertex v are efficient and can be done O(1)

	Disadvantages:
	- Consumers more space O(v^2)
	- Adding and removing vertex is O(v^2) time
*/

void addEdge(int graph[][V], int u, int v)
{
    graph[u][v] = 1;
}

int main() {
	int graph[V][V] = {0};

	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 1);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 3, 2);
	addEdge(graph, 3, 4);
	
	cout << "Adjacency Matrix: " << endl;
	for (int i=0; i<V; ++i) {
		for (int j = 0; j < V; ++j) {
			cout << graph[i][j]	<< "  ";
		}
		cout << endl;
	}
	return 0;
}