#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, c;
    c = 0;
    scanf("%d\n", &n);
    for (int i = 0;i < n; i++){
        long long temp;
        cin >> temp;
        if (temp < 0){
            c++;
        }
    }
    printf("%d", c);
}
