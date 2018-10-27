#include <iostream>
using namespace std;

int main(){
    int n, t, i;
    cin >> n;
    i = t = 1;
    while (t < n){
        t *= 2;
        i++;
    }
    cout << i << endl;
    return 0;
}