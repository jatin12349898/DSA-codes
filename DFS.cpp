/*#include "bits/stdc++.h"
using namespace std;
const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];

void dfs(int node)
{
    vis[node] = 1;
    cout << node << " ";

    vector<int>::iterator it;
    for (it = adj[node].begin(), it != adj[node].end(); it++)
    {
        if (!vis[*it])
        {
            dfs(*it);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < N; i++)
    {
        vis[i] = false;
    }

    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
}*/
//
//
//
//BABBAR DFS
/*
void dfs(int node , unordered_map<int,bool> &visited , unordered_map<int , list<int>> &adj,
        vector<int> &component){
            component.push_back(node);
            visited[node] = true;

        for(auto i:adj[node]){//sare neighbours check krne ke liye
            if(!visited[i]){
                dfs(i , visited , adj , component);
            }
        }
    }

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int , list<int>> adj;
    for(int i = 0 ; i<edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>>ans;

    unordered_map<int,bool> visited;

    for(int i = 0 ; i < V ; i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i , visited , adj , component);
            ans.push_back(component);
        }
    }
    return ans;
}*/
//
//
//CYCLE DETECTION
/*
#include <unordered_map>
#include <queue>
#include <list>

int cycbfs(int node , unordered_map<int,list<int>> &adj ,  unordered_map<int , bool>&visited)
{
    unordered_map<int , int> parent;
    parent[node] = -1;
    visited[node] = true;

    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto i:adj[front]){
            if(visited[i] == true && i!= parent[front]){
                return true;
            }
            if(!visited[i]){
                q.push(i);
                visited[i]= true;
                parent[i] = front;
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    //first crete an adjancy list
    unordered_map<int,list<int>> adj;
    for(int i = 0 ; i < m ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int , bool>visited;
    //for disconnected components
    for(int i = 0 ; i<n ; i++){
        if(!visited[i]){
            bool ans = cycbfs(i , adj , visited);
            if(ans==true){
                return "Yes";
            }
        }
    }
    return "No";
}
*/
//
//
//USING DFS
/*
#include <unordered_map>
#include <queue>
#include <list>

int cycbfs(int node , unordered_map<int,list<int>> &adj ,  unordered_map<int , bool>&visited)
{
    unordered_map<int , int> parent;
    parent[node] = -1;
    visited[node] = true;

    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto i:adj[front]){
            if(visited[i] == true && i!= parent[front]){
                return true;
            }
            if(!visited[i]){
                q.push(i);
                visited[i]= true;
                parent[i] = front;
            }
        }
    }
    return false;
}

int cycdfs(int node ,int parent, unordered_map<int,list<int>> &adj , unordered_map<int,bool> &visited){
  
    visited[node] = true;
    for(auto i:adj[node]){
        if(!visited[i]){
            bool cycledetected = cycdfs(i,node, adj, visited);
            if(cycledetected){
                return true;
            }
        }
        else if(i != parent){
            return true;
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    //first crete an adjancy list
    unordered_map<int,list<int>> adj;
    for(int i = 0 ; i < m ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int , bool>visited;
    //for disconnected components
    for(int i = 0 ; i<n ; i++){
        if(!visited[i]){
            bool ans = cycdfs(i , -1, adj , visited);
            if(ans==true){
                return "Yes";
            }
        }
    }
    return "No";
}
*/
//
//
//cycle detection using dfs in directed graph
/*
#include <list>
#include <unordered_map>
#include <vector>

int cycledetect(int node, unordered_map<int, bool> &visited,
                unordered_map<int, bool> &dfsvisited,
                unordered_map<int, list<int>> adj) {
  visited[node] = true;//visited true krne hai
  dfsvisited[node] = true;//dfs visited bhi true krna hai aate hue dfs visited ko vapis false krdene hai

  for (auto i : adj[node]) {
    if (!visited[i]) {//if not visited than hamne check kiya hai
      bool ans = cycledetect(i, visited, dfsvisited, adj);
      if (ans) {
        return true;
      }
    }

    else if(dfsvisited[i]) { return true; }//dfsvisited and visited both true than cycle
  }
  dfsvisited[node] = false;//aate hue hamne dfs visited ko bhi faklse krdia
  return false;//if no cycle
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
  // Write your code here.
  // creating an adj list
  unordered_map<int, list<int>> adj;
  for (int i = 0; i < edges.size(); i++) {
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
  }

  // crating visited structures
  unordered_map<int, bool> visited;
  unordered_map<int, bool> dfsvisited;

  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      bool ans = cycledetect(i, visited, dfsvisited, adj);
      if (ans) {
        return true;
      }
    }
  }
  return false;
}
*/
//
//
//topological sort
/*
#include <bits/stdc++.h>
#include <stack>
void toposort(int node , vector<bool> &visited , unordered_map<int , list<int>> &adj
, stack<int> &s){
    visited[node] = true;

    for(auto i : adj[node]){
        if(!visited[i]){
            toposort(i, visited, adj, s);
        }
    }
    s.push(node);
} 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    unordered_map<int , list<int>> adj;
    for(int i = 0 ; i < e ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    vector<bool> visited(v);
    stack<int> s;
    for(int i=0 ; i<v ;i++){
        if(!visited[i]){
            toposort(i , visited , adj , s);
        }
    }

    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}*/
//
//
//
