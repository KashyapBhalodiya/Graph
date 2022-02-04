#include <bits/stdc++.h>
#define V 5
#define E 8
using namespace std;

// Incidence matrix is a matrix where each column represents an edge connected to two vertices.

/*
	The graph is represented using a matrix of V * E
	undirected graph: 0, 1
	directed graph: 0, 1, -1
*/

void addEdge(int graph[][E], int u, int v, int e) {
	graph[u][e] = 1;
	if (u != v)
		graph[v][e] = -1;
}

int main() {
	int graph[V][E] = {0};

	addEdge(graph, 0, 1, 0);
    addEdge(graph, 0, 4, 1);
    addEdge(graph, 1, 4, 2);
    addEdge(graph, 1, 3, 3);
    addEdge(graph, 1, 1, 5);
    addEdge(graph, 1, 2, 6);
    addEdge(graph, 3, 4, 4);
    addEdge(graph, 3, 2, 7);

	cout << "Incidence Matrix: " << endl;
	for (int i=0; i < V; ++i) {
		for (int j=0; j < E; ++j) {
			cout << graph[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}