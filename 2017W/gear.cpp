#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int cases;
	cin >> cases;
	int i;
	for (i = 0; i < cases; i++){
		int gears;
		int previous;
		int current;
		int j;
		double speed = 1;
		cin >> gears;
		cin >> previous;
		for (j = 1; j < gears; j++){
			cin >> current;
			speed *= (double)previous/current;
			speed *= -1;
			previous = current;
		}
		double initialSpeed;
		cin >> initialSpeed;
		printf("%.3lf\n", initialSpeed * speed);
	}
	return 0;
}
