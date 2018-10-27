#include <string>
#include <cstdlib>
#include <iostream>


using namespace std;

int x,y;
char board[1000][1000];

void dfs(int i, int j){
    if (i < 0 || i >= x || j < 0 || j >= y || board[i][j] != '#'){
        return;
    }
    
    board[i][j] = '.';
    dfs(i - 1, j - 1);
    dfs(i - 1, j);
    dfs(i - 1, j + 1);
        
    dfs(i, j - 1);
    dfs(i, j + 1);
    
    dfs(i + 1, j - 1);
    dfs(i + 1, j);
    dfs(i + 1, j + 1);
        
}

int main(){
    cin >> y >> x; //(y,x) (j,i) [i][j]
    for (int j = 0; j < y; j++){
        string temp;
        cin >> temp;
        for (int i = 0; i < x; i++){
            board[i][j] = temp[i];
        }
    }


    int sum = 0;
    for (int j = 0; j < y; j++){
        for (int i = 0; i < x; i++){
            if (board[i][j] == '#'){
                dfs(i, j);
                sum ++;
            }
        }
    }


    cout << sum << flush;
    return 0;
}