#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void topologicalSortUtil(const vector<vector<int>> &graph, vector<int> &indegree, vector<char> &result, vector<bool> &visited)
{
    bool flag = false;

    for (int i = 0; i < graph.size(); ++i)
    {
        if (!visited[i] && indegree[i] == 0)
        {
            visited[i] = true;
            result.push_back('A' + i);

            for (int j = 0; j < graph.size(); ++j)
            {
                if (graph[i][j] == 1)
                {
                    --indegree[j];
                }
            }

            topologicalSortUtil(graph, indegree, result, visited);

            visited[i] = false;
            result.pop_back();

            for (int j = 0; j < graph.size(); ++j)
            {
                if (graph[i][j] == 1)
                {
                    ++indegree[j];
                }
            }

            flag = true;
        }
    }

    if (!flag)
    {
        for (char ch : result)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void topologicalSort(const vector<vector<int>> &graph, const vector<char> &vertexLabels)
{
    vector<int> indegree(graph.size(), 0);

    // Calculate in-degree for each vertex
    for (int i = 0; i < graph.size(); ++i)
    {
        for (int j = 0; j < graph.size(); ++j)
        {
            if (graph[j][i] == 1)
            {
                ++indegree[i];
            }
        }
    }

    vector<bool> visited(graph.size(), false);
    vector<char> result;

    topologicalSortUtil(graph, indegree, result, visited);
}

int main()
{
    int vertices;
    cout << "Enter the number of vertices in the graph: ";
    cin >> vertices;

    vector<vector<int>> graph(vertices, vector<int>(vertices));
    vector<char> vertexLabels(vertices);

    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            cin >> graph[i][j];
        }
    }

    cout << "Enter the labels for the vertices (characters):\n";
    for (int i = 0; i < vertices; ++i)
    {
        cin >> vertexLabels[i];
    }

    cout << "\nAll possible topological orders:\n";
    topologicalSort(graph, vertexLabels);

    return 0;
}
