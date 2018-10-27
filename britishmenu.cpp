#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector<unsigned long> arrow[10001];
unsigned long point [2][10001];
deque<unsigned long> deadloopqueue;


int goToHell(unsigned long loop, unsigned long cur, unsigned long length){    
    //printf("goto%d in %d\n", cur, loop);
    deadloopqueue.push_back(cur);
    point[0][cur] = length;
    point[1][cur] = loop;

    
    for (unsigned long & to: arrow[cur]){
        //fill(find(deadloopqueue.begin(),deadloopqueue.end(),to),deadloopqueue.end(), length);
        if ((point[0][to] <= length) && (find(deadloopqueue.begin(),deadloopqueue.end(),to) == deadloopqueue.end())){            
            goToHell(loop, to, length + 1);
        }
    }

    // same loop but shorter then stop

    // otherwise goon
        // if differen loop
        // longer then go on
        // otherwise stop
    //if (deadloopqueue.size() > 100){
    //    deadloopqueue.pop_front();
    //}
    
    deadloopqueue.pop_back();
}

int main(){
    unsigned long n, m;
    scanf("%lu%lu", &n, &m);

    // init
    for (long i = 0; i <= n; i++){
        point[0][i] = point[1][i] = 0;
        //arrow[i]; //create vector. no need to call
    }

    // read conneciton
    for (long i = 0; i < m; i++){
        unsigned long from, to;
        scanf("%lu%lu", &from, &to);
        arrow[from].push_back(to);
    }
/*
    for (long i = 1; i <= n; i++){
        printf("%lu\t-> ", i);
        for (unsigned long & to: arrow[i]){
            printf("\t%lu", to);
        }
        printf("\n");
        // arrow[i].clear(); // clear vector using this function
    }
*/

    // scan   
    unsigned long loop = 1;
    for (long i = 1; i <= n; i++){
        if ( point[0][i] == 0 ){            
            goToHell(loop, i, 1);
            loop++;
        }
    }
    
    unsigned long max = 0;
    
    for (long i = 0; i <= n; i++){
        if (point[0][i] > max) {
            max = point[0][i];
        }        
    }

    cout << max << endl;


    return 0;
}