#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int number;
    scanf("%d", &number);
    
    vector<long long int> data(20000, 0);

    for(int i = 0; i < number; i++){
        scanf("%lld", &(data[i]));
    }

    sort(data.begin(), data.beign() + number);  

/*
    for(int i = 0; i < number; i++){
        printf("%lld\t", data[i]);
    }

    printf("impossible");
*/
    long long int a = data[0];
    long long int b = data[1];

    for (int i = 2; i < number; i++){
        if ((a + b) > data[i]){
            printf("possible");
            return 0;
        }
        a = b;
        b = data[i];
    }

    printf("impossible");

    return 0;
}
