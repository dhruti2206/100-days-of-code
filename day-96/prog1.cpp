//Check bipartite graph
#include <iostream>
#include <vector>
using namespace std;
bool isBipartiteUtil(vector<vector<int>>& graph, vector<int>& colors, int
node, int color) {
    colors[node] = color;

    for (int neighbor : graph[node]) {
        if (colors[neighbor] == -1) {
            if (!isBipartiteUtil(graph, colors, neighbor, 1 - color)) {
                return false;
            }
        } else if (colors[neighbor] == color) {
            return false; // Same color on both sides
        }
    }
    return true;
}
bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> colors(n, -1); // -1: uncolored, 0: color 1, 1: color 2

    for (int i = 0; i < n; i++) {
        if (colors[i] == -1) {
            if (!isBipartiteUtil(graph, colors, i, 0)) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    vector<vector<int>> graph = {
        {1, 3}, // Edges for vertex 0
        {0, 2}, // Edges for vertex 1
        {1, 3}, // Edges for vertex 2
        {0, 2}  // Edges for vertex 3
    };

    if (isBipartite(graph)) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }
    return 0;
}
