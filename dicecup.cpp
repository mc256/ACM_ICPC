#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a,b, max;
    cin >> a >> b;
    max = (a > b)? a + 1 : b + 1;
    for (int i = (a > b)? b + 1 : a + 1 ; i <= max; i++){
        printf("%d\n",i);
    }

	return 0;
}
