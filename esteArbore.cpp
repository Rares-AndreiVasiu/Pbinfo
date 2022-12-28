#include <iostream>
#include <vector>
#include <unordered_set>
#include <fstream>

std::ifstream fin("estearbore.in");
std::ofstream fout("estearbore.out");

const int N = 1005;

int n;

std::vector<int> adj[N];

bool visited[N];

void dfs(int u) 
{
    visited[u] = true;
    
    for (int v : adj[u]) 
    {
        if (!visited[v]) 
        {
            dfs(v);
        }
    }
}

int main() 
{
    fin >> n;

    int u, v;

    int m = 0;

    while(fin >> u >> v) 
    {
        m ++;
        
        if(std::find(adj.begin(), adj.end(), {u, v}) == adj.end())
        {
            adj[u].push_back(v);
        }
        
        if(std::find(adj.begin(), adj.end(), {v, u}) == adj.end())
        {
            adj[v].push_back(u);
        }
    }



    dfs(1);

    bool is_connected = true;

    for (int i = 1; i <= n && is_connected; i++) 
    {
        if (!visited[i]) 
        {
            is_connected = false;
        }
    }

    // Check if the graph has any cycles
    std::unordered_set<int> st;
    
    bool has_cycle = false;

    for (int u = 1; u <= n && !has_cycle; u++) 
    {
        for (int v : adj[u]) 
        {
            if (st.count(v)) 
            {
                has_cycle = true;
            }
            st.insert(u);
        }
        
        st.clear();
        
        if (has_cycle)
        {
            break;
        }
    }

    if (is_connected && !has_cycle) 
    {
        fout << "DA";
    } 
    else 
    {
        fout << "NU";
    }

    return 0;
}