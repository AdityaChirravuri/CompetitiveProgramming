#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
 
class Graph{
    int V;
    list<int> *adj;
public:
    bool *vis;
    Graph(int v);
    void AddEdge(int u, int w);
    void DFS(int i);
};
 
/*class Graph
{
    int V;    // No. of vertices
    list<int> *adj; // Pointer to an array for adjacency lists
    bool isCyclicUtil(int v, bool visited[], int parent);
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // to add an edge to graph
    bool isTree();   // returns true if graph is tree
};
  */
 
Graph::Graph(int v)
{
    this->V = v;
    adj = new list<int>[V];
    this->vis = new bool[V];
    memset(vis, false, V);
}
 
void Graph::AddEdge(int u, int v)
{
    adj[u].push_back(v);
}
 
void Graph::DFS(int j)
{
    vis[j] = true;
 
    list<int>::iterator i;
    for(i=adj[j].begin(); i!=adj[j].end(); i++){
        if(!vis[*i]){
            DFS(*i);
        }
    }
}
 
int main()
{
    fastio;
    int t;
    cin >> t;
 
    while(t--){
        int e;
        cin >> e;
        set<int>s;
        //Graph g = Graph(e);
        for(int i=0; i<e; i++){
            int a, b;
            cin >> a >> b;
            s.insert(a);
            s.insert(b);
            //g.AddEdge(a, b);
        }
        //int count = 0;
        //for(int i=0; i<e; i++){
            //if(!g.vis[i])count++;
        //}
        //cout << count << "\n";
        cout << s.size() << "\n";
    }
 
    return 0;
}
