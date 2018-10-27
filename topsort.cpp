
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <deque>
#include <algorithm>
#include <map>
#include <cstring>

using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define FORIT(i,c) for (__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define FORITR(i,c) for (__typeof__((c).rbegin()) i = (c).rbegin(); i != (c).rend(); i++)
#define MAX 20

//normal
vector<int> adj[MAX][2];
int n, m;

// Topsort
vector<int> ts_list;
int ts_state[MAX];
int ts_dist[MAX];
bool topsort_loop;

void topsort_dfs(int current){
    if (ts_state[current] == 1) topsort_loop = true;
    if (ts_state[current]) return;
    ts_state[current] = 1;
    FORIT(i,adj[current][0]) topsort_dfs(*i);
    ts_state[current] = 2;
    ts_list.push_back(current);
}

void topsort(){
    topsort_loop = false;
    ts_list.clear();
    memset(ts_state, 0, sizeof(ts_state));
    FOR(i,0,n) topsort_dfs(i);
    
    reverse(ts_list.begin(), ts_list.end());
    
    //Print out Result
    cout << "topsort: ";
    FORIT(i,ts_list) cout << " " << *i + 1;
    cout << endl;
    cout << (topsort_loop ? "has loop":"no loop") << endl;
}

// DAG - Algorithm
void dag_short_paths(int b, int e){
    // find the shorted path between [b]egin and [e]nd
    memset(ts_state, 0, sizeof(ts_state));
    memset(ts_dist, 0, sizeof(ts_dist));
    
    // fill points with orders
    int ts_order[MAX];
    int c = 0;
    FORIT(i,ts_list) ts_order[*i] = c++;
    
    
    // find the starting point
    // In this example, all the path length is 1
    ts_state[ts_order[b]] = 1; // mark starting point valid.
    cout << "s:" << ts_order[b] << "\tt:" << ts_order[e] << endl;
    
    FOR(i,ts_order[b],ts_order[e]) FORIT(j,adj[ts_list[i]][0]) if (ts_state[ts_order[*j]]){
        int p = 1;
        if (ts_dist[ts_order[*j]] > ts_dist[i] + p) ts_dist[ts_order[*j]] = ts_dist[i] + p;
    }else{
        ts_state[ts_order[*j]] = 1;
        int p = 1;
        ts_dist[ts_order[*j]] = ts_dist[i] + p;
    }
    
    //print result
    cout << "Has path:" << ts_state[ts_order[e]] << endl;
    cout << "length  :" << ts_dist[ts_order[e]] << endl;
    
    cout << "DAG-SP: ";
    FOR(i,0,n) cout << " " << ts_dist[i];
}

// scc id from 0..N
int main(){
    cin >> n >> m;
    FOR(i,0,n){
        adj[i][0].clear();
        adj[i][1].clear();
    }
    
    FOR(i,0,m){
        int f,t;
        cin >> f >> t;
        f--;t--;
        adj[f][0].push_back(t);
        adj[t][1].push_back(f);
    }
    
    FOR(i,0,n){
        cout << i + 1 << " to:";
        FORIT(j,adj[i][0]) cout << *j + 1<< "\t";
        cout << "\tfrom:";
        FORIT(j,adj[i][1]) cout << *j + 1<< "\t";
        cout << endl;
    }
    
    //Topsot
    topsort();
    dag_short_paths(1,16);
    return 0;
}