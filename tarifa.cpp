#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int plan, c;
	long sum = 0;

	scanf("%d %d", &plan, &c);
	for (int i = 0; i < c; i++){
		int t;
		scanf("%d", &t);
		sum += plan - t;
	}
	printf("%ld", sum + plan);
	return 0;
}
