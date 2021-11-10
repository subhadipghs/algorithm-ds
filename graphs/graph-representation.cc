#include <bits/stdc++.h>
using namespace std;


/**
 * Graph is a non-linear data strucure comprises of ordered pair of (v, e);
 *
 * Terminology:
 * -----------
 * Nodes/Vertex: the main entities in graphs. the entity that are connected to each by user defined relation
 * Edges: nodes are connected by edges. sometimes they're uni-directed or bi-directed. sometimes they carry cost or weight
 *
 * Root node/vertex: ancestor of all vertex in a graph
 * Lead node/vertex: nodes that do not have any child node
 *
 * Types of graphs:
 * ----------------
 * 1. Undirected graph: where a edge is bi-directional. edges do not point to any particular direction from one vertex to another
 * 2. Directed graph; where a edge is uni-directional. there's a specific direction from one vertex to other vertex
 * 3. Weighed graph; where the edge carry some cost or weight
 * 4. Cyclic graph: where there's a path from a vertex that'll end up in that vertex as well
 */


void matrix_rep() {
  int nodes, edges, x, y;
  cout << "Enter no of nodes ";
  cin >> nodes;
  cout << "Nodes " << nodes << '\n';
  vector<vector<bool>> graph(nodes, vector<bool>(nodes, false));

  for (int i = 0; i < nodes; i++) {
    for (int j = 0; j < nodes; j++) {
      cout << graph[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "total number of edges: ";
  cin >> edges;
  cout << "Enter " << edges << "edges\n";

  for (int i = 0; i < edges; i++) {
    cin >> x >> y;
    graph[x][y] = true;
  }

  for (int i = 0; i < nodes; i++) {
    for (int j = 0; j < nodes; j++) {
      if (graph[i][j] == true) {
        cout << i << "->" << j << "\n";
      }
    }
  }
}

/**
 *
 * 0
 * 1 -> 2
 * 2 -> 1
 */



void list_rep() {
  int n = 0, e = 0, x = 0, y = 0;
  vector<vector<int>> list;
  cout << "enter no of nodes ";
  cin >> n;

  // resize the list
  list.resize(n);
  cout << "enter no of edges ";
  cin >> e;

  for (int i = 0; i < e; i++) {
    cin >> x >> y;
    list[x].push_back(y);
  }

  for (int i = 0; i < n; i++) {
    cout << i << "->";
    for (int j = 0; j < list[i].size(); j++) {
      cout << list[i][j] << "->";
    }
    cout << '\n';
  }
}

int main(int argc, char const* argv[]) {
  list_rep();
  return 0;
}
