#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    bool hit[42];
    for (int i = 0; i < 42; i ++){
        hit[i] = false;
    }

    int val;
    while (cin >> val){
        hit[val % 42] = true;
    }

    int sum = 0;
    for (int i = 0; i < 42; i++){
        if (hit[i]){
            sum ++;
        }
    }
    printf("%d", sum);

	return 0;
}
