#include <bits/stdc++.h>

using namespace std;
int V = 7; // vertices

void addEdge(vector<int> graph[], int u, int v) {
	graph[u].push_back(v);
	graph[v].push_back(u);
}

void dfs_iterative(vector<int> graph[], int start) {
	vector<bool> visited(V, false);
	stack<int> s;
	s.push(start);
	visited[start] = true;
	while (!s.empty()) {
		int v = s.top();
		cout << v << " ";
		s.pop();
		
		// enqueue all the adjacent node of v and mark as visited
		for (auto i = graph[v].begin(); i != graph[v].end(); i++) {
			if (!visited[*i]) {
				s.push(*i);
				visited[*i] = true;
			}
		}
	}
}

void dfs_recursive(vector<int> graph[], vector<bool>& visited, int node) {
	visited[node] = true;
	cout << node << " ";
	for (auto i = graph[node].begin(); i != graph[node].end(); i++) {
		if (!visited[*i]) {
			dfs_recursive(graph, visited, *i);
		}
	}
}

int main() {

	vector<int> graph[V];
	addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 6);
    addEdge(graph, 3, 4);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 6);

    cout << "DFS traversal iterative starting from node 0:" << "  ";
    dfs_iterative(graph, 0);
    cout << endl;

    cout << "DFS traversal recursive starting from node 0:" << "  ";
    vector<bool> visited(V, false);
    dfs_recursive(graph, visited, 0);

	return 0;
}