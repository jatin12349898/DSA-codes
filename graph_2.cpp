#include <iostream>
using namespace std;
const int V = 5;
// Add edge

void addEdge_und(int adj[][V], int s, int d)
{
    adj[s][d] = 1;
    adj[d][s] = 1;
}
void addEdge_d(int adj[][V], int s, int d)
{
    adj[s][d] = 1;
}

// Print the graph
void printGraph(int adj[][V], int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "\n Vertex " << d << ":";
        for (int i = 0; i < V; ++i)
        {
            if (adj[d][i] == 1)
                cout << "-> " << i;
        }
        cout << "\n";
    }
}
void print(int adj[][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // Create a graph (adjacency matrix)
    int adj[V][V] = {0};

    // Add edges
    addEdge_d(adj, 0, 1);
    addEdge_d(adj, 0, 2);
    addEdge_d(adj, 0, 3);
    addEdge_d(adj, 1, 2);
    printGraph(adj, V);
    print(adj);
    return 0;
}
