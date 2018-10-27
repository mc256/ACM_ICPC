#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int level[10005];
    for (int i = 0; i < 10001; i++){
        level[i] = 0;
    }

    for (int j = 0; j < n; j++){
        int y, x1, x2;
        cin >> y >> x1 >> x2;
        //printf("%d %d %d \n",y,x1,x2);
        for (int k = x1; k <= x2; k ++){
            if (level[k] < y){
                level[k] = y;
            }
        }
    }

    unsigned long long sum = 0;
    int def = 0;
    for (int i = 0; i < 10001; i ++){
        if (level[i] > def) {
            sum += level[i];
            def = level[i];
        }else if (level[i] < def){
            sum += def;
            def = level[i];
        }
    }
    cout << sum;
}
