#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;


int main(){
    int n;
    int fn,fn1,fn2;
    int gn,gn1,gn2;
    fn1 = fn2 = gn1 = gn2 = 1;
    for (int i = 3; i < 20; i ++){
        fn = fn1 + fn2;
        gn = gn1 + gn2 + 5;
        cout << i << "\t" << fn << "\t" << gn << "\t" <<  (gn - fn) / 5 << endl;
        fn2 = fn1;
        fn1 = fn;
        gn2 = gn1;
        gn1 = gn;
    }
	// Calculate the distance
	return 0;
}
