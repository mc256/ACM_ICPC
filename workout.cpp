#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
    int jim[10][2];
    int others[10][3];
    for (int i = 0; i < 10; i ++){
        cin >> jim[i][0] >> jim[i][1];
    }
    for (int i = 0; i < 10; i ++){
        cin >> others[i][0] >> others[i][1] >> others[i][2];     
    }

    int total = 0;
    for (int j = 0; j < 3; j ++){
        for (int i = 0; i < 10; i ++){
            //----|---Working---|----Relexing----|----
            if (total < others[i][] ){
    
            }
        }
    }

    cout << total << endl;
    
    
    return 0;
}