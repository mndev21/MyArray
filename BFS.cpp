#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <random>
#include <algorithm>

using Graph = std::vector<std::list<size_t>>;

void bfs(const Graph& graph, std::vector<bool>& visited, std::queue<size_t>& currentVertices) {
    while (!currentVertices.empty()) {
        std::size_t node = currentVertices.front();
        currentVertices.pop();

        std::vector<size_t> neighbors(graph[node].begin(), graph[node].end());
        std::shuffle(neighbors.begin(), neighbors.end(), std::random_device());

        for (const std::size_t neighbour: neighbors) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                currentVertices.push(neighbour);
                std::cout << neighbour << ' ';
            }
        }
    }
}

int main() {
    Graph  graph = {
            {1, 2, 3},
            {0, 4, 5},
            {0, 6},
            {0, 7, 8},
            {1, 9},
            {1, 10},
            {2, 11},
            {3, 12},
            {3},
            {4},
            {5, 13},
            {6, 14},
            {7, 15},
            {10},
            {11},
            {12}
    };

    std::queue<size_t> currentVertices;
    std::vector<bool> visited(graph.size(), false);

    for (size_t i = 0; i < graph.size(); ++i) {
        if (visited[i]) continue;

        currentVertices.push(i);
        visited[i] = true;
        std::cout << i << ' ';
        bfs(graph, visited, currentVertices);


    }
    return 0;
}
