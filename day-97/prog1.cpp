//Dijkstra’s algorithm
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
struct Edge {
    int to, weight;
    Edge(int t, int w) : to(t), weight(w) {}
};
vector<int> dijkstra(int V, vector<vector<Edge>>& graph, int src) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src}); // {distance, vertex}

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (const Edge& edge : graph[u]) {
            int v = edge.to;
            int weight = edge.weight;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
int main() {
    int V = 5; // Number of vertices
    vector<vector<Edge>> graph(V);

    // Adding edges to the graph (undirected)
    graph[0].push_back(Edge(1, 10));
    graph[0].push_back(Edge(2, 5));
    graph[1].push_back(Edge(0, 10));
    graph[1].push_back(Edge(2, 2));
    graph[1].push_back(Edge(3, 1));
    graph[2].push_back(Edge(0, 5));
    graph[2].push_back(Edge(1, 2));
    graph[2].push_back(Edge(3, 9));
    graph[2].push_back(Edge(4, 2));
    graph[3].push_back(Edge(1, 1));
    graph[3].push_back(Edge(2, 9));
    graph[3].push_back(Edge(4, 4));
    graph[4].push_back(Edge(2, 2));
    graph[4].push_back(Edge(3, 4));

    int src = 0; // Source vertex
    vector<int> distances = dijkstra(V, graph, src);

    cout << "Shortest distances from source vertex " << src << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": " << distances[i] << endl;
    }
    return 0;
}
