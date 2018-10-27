#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	int data[100000];
	scanf("%d\n", &n);
	for(int i = 0; i < n; i++){
		scanf("%d\n", &(data[i]));
	}
	int half = n / 2;

	for(int kk = 1; kk <= half; kk++){
		int steps = 0;
		int p;
		int k = kk;
		int act_val;
		//find that number
		for (p = 0; p < n; p++){
			if (data[p] == k){
				break;
			}
		}

		//move element
		act_val = p + 1;
		if (act_val >= k){
			// move left
			printf("%d\n", act_val - k);
			for (int h = p; h >= k; h--){
				int temp = data[h];
				data[h] = data[h - 1];
				data[h - 1] = temp;
			}
		}else{
			// move right
			printf("%d\n", k - act_val);
			for (int h = p + 1; h < k; h ++){
				int temp = data[h];
				data[h] = data[h - 1];
				data[h - 1] = temp;
			}
		}
		
		//print out array
		//for (int pp = 0; pp < n; pp++){
		//	printf("%d\t", data[pp]);
		//}
		//printf("\n");


		/////////////////////////////////////////////////////////
		k = n - kk + 1;
		//find that number
		for (p = 0; p < n; p++){
			if (data[p] == k){
				break;
			}
		}

		
		//move element
		act_val = p + 1;
		if (act_val >= k){
			// move left
			printf("%d\n", act_val - k);
			for (int h = p; h >= k; h--){
				int temp = data[h];
				data[h] = data[h - 1];
				data[h - 1] = temp;
			}
		}else{
			// move right
			printf("%d\n", k - act_val);
			for (int h = p + 1; h < k; h ++){
				int temp = data[h];
				data[h] = data[h - 1];
				data[h - 1] = temp;
			}
		}
		
		//print out array
		//for (int pp = 0; pp < n; pp++){
		//	printf("%d\t", data[pp]);
		//}
		//printf("\n");

	}
	printf("0\n");
	return 0;
}
