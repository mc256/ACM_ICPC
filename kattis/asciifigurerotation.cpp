#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n; //return is not yet read.
    bool first = true;
    while (n != 0){
        //cout << "n = " << n << endl;
        char map[101][101];
        for (int i = 0; i < 101; i++){
            for (int j = 0; j < 101; j++){
                map[i][j]=0;
            }
        }
        char maxWidth = 0;
        char c;
        cin.get(c);
        if (!first) {
            cout << endl;
        }else{
            first = false;
        }
        for (int i = 1; i <= n; i++){
            for (int j = 0; j < 100; j++){
                cin.get(c);
                //cout << "i=" << i << " j=" << j << " | " << c <<endl;
                if (c == '+'){
                    map[i][j] = '+';
                    if (map[0][j] == 0){
                        map[0][j] = i;
                    }
                }else if (c == '|'){
                    map[i][j] = '-';
                    if (map[0][j] == 0){
                        map[0][j] = i;
                    }
                }else if (c == '-'){
                    map[i][j] = '|';
                    if (map[0][j] == 0){
                        map[0][j] = i;
                    }
                }else if (c == ' '){
                    map[i][j] = ' ';
                }else{
                    map[i][j] = ' ';
                    break;
                }
                if (j > maxWidth){
                    maxWidth = j;
                }
            }
        }

        /*
        cout << "---------------------" << endl;        
        for (int j = 0; j <= maxWidth; j++){
            cout << +map[0][j] ;
        }
        cout << endl;

        for (int i = 1; i <= n; i++){
            for (int j = 0; j <= maxWidth; j++){
                cout << map[i][j] ;
            }
            cout << endl;
        }
        
        cout << "---------------------" << endl;
        */

        for (int x = 0; x <= maxWidth; x++){
            if (map[0][x] == 0){
                cout << endl;
                continue;
            }
            for (int y = n; y >= map[0][x]; y --){
                if (map[y][x] == '+' || map[y][x] == '-' || map[y][x] == '|' || map[y][x] == ' '){
                    cout << map[y][x];
                }else{
                    cout << ' ';
                }
            }
            cout << endl;
        }

        //For Next graph
        cin >> n;
    }
    return 0;
}