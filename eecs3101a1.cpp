#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    long v = 0;
    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= i + n; j++){
            v = v + j;
        }
    }
    cout << "v = " << v << endl;
    cout << "v2= " << n*n*n + n*n << endl;
    cout << "v3= " << 19.0/12.0*n*n*n + 5.0/2.0*n*n +11.0/12.0*n<< endl;

	return 0;
}
