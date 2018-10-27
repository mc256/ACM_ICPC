#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

char map[7][7];

bool isValidIndex (int i){
    return i >= 0 && i < 7;
}

bool canMoveUp(int r, int c){
    return 
    isValidIndex(r) && isValidIndex(c) &&
    map[r][c] == 'O' &&
    isValidIndex(r - 1) && isValidIndex(c) &&
    map[r - 1][c] == 'O' &&
    isValidIndex(r - 2) && isValidIndex(c) &&
    map[r - 2][c] == '.';
}

void moveUp(int r, int c){
    printf("game.move_up(%d,%d)\n", r + 1, c + 1);
    map[r][c] = '.';
    map[r - 1][c] = '.';
    map[r - 2][c] = 'O';
}

bool canMoveDown(int r, int c){
    return 
    isValidIndex(r) && isValidIndex(c) &&
    map[r][c] == 'O' &&
    isValidIndex(r + 1) && isValidIndex(c) &&
    map[r + 1][c] == 'O' &&
    isValidIndex(r + 2) && isValidIndex(c) &&
    map[r + 2][c] == '.';
}


void moveDown(int r, int c){
    printf("game.move_down(%d,%d)\n", r + 1, c + 1);
    map[r][c] = '.';
    map[r + 1][c] = '.';
    map[r + 2][c] = 'O';
}

bool canMoveLeft(int r, int c){
    return 
    isValidIndex(r) && isValidIndex(c) &&
    map[r][c] == 'O' &&
    isValidIndex(r) && isValidIndex(c - 1) &&
    map[r][c - 1] == 'O' &&
    isValidIndex(r) && isValidIndex(c - 2) &&
    map[r][c - 2] == '.';
}

void moveLeft(int r, int c){
    printf("game.move_left(%d,%d)\n", r + 1, c + 1);
    map[r][c] = '.';
    map[r][c - 1] = '.';
    map[r][c - 2] = 'O';
}

bool canMoveRight(int r, int c){
    return 
    isValidIndex(r) && isValidIndex(c) &&
    map[r][c] == 'O' &&
    isValidIndex(r) && isValidIndex(c + 1) &&
    map[r][c + 1] == 'O' &&
    isValidIndex(r) && isValidIndex(c + 2) &&
    map[r][c + 2] == '.';
}

void moveRight(int r, int c){
    printf("game.move_right(%d,%d)\n", r + 1, c + 1);
    map[r][c] = '.';
    map[r][c + 1] = '.';
    map[r][c + 2] = 'O';
}

 
bool gameOver(){
    for (int i = 0; i < 7; i ++){
        for (int j = 0; j < 7; j ++){
            if (canMoveDown(i,j) || canMoveLeft(i,j) || canMoveRight(i,j) || canMoveUp(i,j)){
                return false;
            }
        }
    }
    return true;
}


int main(){
    string buf;
	for (int i = 0; i < 7; i++){
        cin >> buf;
        for (int j = 0; j < 7; j++){
            map[i][j] = buf[j];
        }
    }

	for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout << map[i][j];
        }
        cout << endl;
    }


    while (!gameOver()) {
        for (int i = 0; i < 7; i++){
            for (int j = 0; j < 7; j++){
                if (canMoveRight(i,j)){
                    moveRight(i,j);
                }else if (canMoveUp(i,j)){
                    moveUp(i,j);
                }else if (canMoveLeft(i,j)){
                    moveLeft(i,j);
                }else if (canMoveDown(i,j)){
                    moveDown(i,j);
                }
            }
        }
    }
	for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            cout << map[i][j];
        }
        cout << endl;
    }


	return 0;
}
