#include <bits/stdc++.h>
using namespace std;

// Graph Traversal: technique to used for visiting each vertex of the graph.

// BFS: traverses a graph in a breadthward motion and uses a queue to remember to get the next vertex to start a search

// How to avoid the cycles? -> using visited nodes

void addEdge(vector<int> graph[], int u, int v) {
	graph[u].push_back(v);
	graph[v].push_back(u);
} 

void bfs(vector<int> graph[], int start) {
	vector<bool> visited(graph->size(), false);
	queue<int> q;
	q.push(start);

	visited[start] = true;
	while (!q.empty()) {
		int V = q.front();
		cout << V << " ";
		q.pop();

		// visited nodes
		for (auto i = graph[V].begin(); i != graph[V].end(); ++i) {
			if (!visited[*i]) {
				q.push(*i);
				visited[*i] = true;
			}
		}
	}
}

int main() {
	int V = 7;
	vector<int> graph[V];

	addEdge(graph, 0, 1);
	addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 6);
    addEdge(graph, 3, 4);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 6);

    cout << "BFS Traversal: " << endl;
    bfs(graph, 0);
	return 0;
}