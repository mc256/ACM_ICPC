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
#define MAX 1000000


//normal
vector<int> adj[MAX][2];
int n, m;

//kosaraju
// scc id from 0..N
int scc_n, scc_list[MAX];
vector<int> scc_stack;
set<int> scc_group[MAX];

void kosaraju_first_dfs(int node){
    if (scc_list[node] != -1) return;
    scc_list[node] = 0;
    FORIT(i,adj[node][0]) kosaraju_first_dfs(*i);
    scc_stack.push_back(node);
}

void kosaraju_second_dfs(int node, int scc_id){
    if (scc_list[node] != -1) return;
    scc_list[node] = scc_id;
    FORIT(i,adj[node][1]) kosaraju_second_dfs(*i, scc_id);
}

void kosaraju(){
    memset(scc_list, -1, sizeof(scc_list));
    scc_stack.clear();
    FOR(i,0,n) kosaraju_first_dfs(i);

    scc_n = 0;
    memset(scc_list, -1, sizeof(scc_list));
    reverse(scc_stack.begin(),scc_stack.end());
    FORIT(i,scc_stack) if (scc_list[*i] == -1) kosaraju_second_dfs(*i,scc_n ++);

    // TEST PRINT OUT
    //FOR(i,0,n) cout << i+1 << " : SCC_ID" << scc_list[i] << endl;
}

//Dynamic Programming
int dp_length[MAX];
int dp_result[MAX];

void dp_fill_distance_dfs(int node, set<int> next, int distance){
    if (distance > dp_length[node]) dp_length[node] = distance;
    next.erase(node);
    FORIT(j,adj[node][0]) if (next.count(*j)) dp_fill_distance_dfs(*j,next,distance+1);
}

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

/*
    FOR(i,0,n){
        cout << i + 1 << " to:";
        FORIT(j,adj[i][0]) cout << *j + 1<< "\t";
        cout << "\tfrom:";
        FORIT(j,adj[i][1]) cout << *j + 1<< "\t";
        cout << endl;
    }
*/
    // Finding Strongly Connected Components
    kosaraju();

    // Clean up a little bit scc
    // scc_group[0] stores all the isolated nodes.
    FOR(i,0,scc_n){
        scc_group[i].clear();
    }
    FOR(i,0,n){
        scc_group[scc_list[i]].insert(i);
    }

    //Print out scc group
/*
    FOR(i,0,scc_n){
        cout << "group id:" << i << "\t";
        FORIT(j,scc_group[i]) cout << *j + 1 << "\t";
        cout << endl;
    }
*/

    // ------------- Dynamic Programming -------------
    //memset(dp_length, -1 ,sizeof(dp_length));
    memset(dp_result, 0 ,sizeof(dp_result));
    // Finding Result "longest path"
    int max_length = 0;
    FOR(i, 0, scc_n){
        FORIT(p,scc_group[i]){
            //loose
            FORIT(j,scc_group[i]) dp_length[*j] = -1;
            //DFS from the node *p
            dp_fill_distance_dfs(*p,scc_group[i],1);
            int length = 0;
            //From outside of the SCC
            FORIT(j,adj[*p][1]) if((i != scc_list[*j]) && (dp_result[*j] > length)) length = dp_result[*j];
            //From inside the SCC
            FORIT(j,scc_group[i]) if (dp_result[*j] < (length + dp_length[*j])) {
                dp_result[*j] = (length + dp_length[*j]);
                if (dp_result[*j] > max_length) {
                    max_length = dp_result[*j];
                }
            }

        }
    }

    cout << max_length << endl;
    return 0;
}