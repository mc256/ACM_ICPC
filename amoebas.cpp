#include <string>
#include <cstdlib>
#include <iostream>


using namespace std;

long x,y;
long xx,yy;
char board[1000][1000];

void dfs(long x, long y){
    board[x][y] = '.';
    if (x > 0 && y > 0 && board[x-1][y-1] == '#'){
        dfs(x-1,y-1);
    }
    if (x > 0 && board[x-1][y] == '#'){
        dfs(x-1,y);
    }
    if (x > 0 && y < yy - 1 && board[x-1][y+1] == '#'){
        dfs(x-1,y+1);
    }
    if (y > 0 && board[x][y-1] == '#'){
        dfs(x,y-1);
    }
    if (y < yy - 1 && board[x][y+1] == '#'){
        dfs(x,y+1);
    }
    if (x < xx - 1 && y > 0 && board[x+1][y-1] == '#'){
        dfs(x+1,y-1);
    }
    if (x < xx - 1 && board[x+1][y] == '#'){
        dfs(x+1,y);
    }
    if (x < xx - 1 && y < yy - 1 && board[x+1][y+1] == '#'){
        dfs(x+1,y+1);
    }
}

int main(){
    cin >> y >> x;
    xx = x;
    yy = y;
    for (long j = 0; j < y; j++){
        string temp;
        cin >> temp;
        for (long i = 0; i < x; i++){
            board[i][j] = temp[i];
        }
    }
    long sum = 0;

    for (long i = 0; i < x; i++){
        for (long j = 0; j < y; j++){
            if (board[i][j] == '#'){
                dfs(i, j);
                sum ++;
            }
        }
    }


    cout << sum << endl;
    return 0;
}