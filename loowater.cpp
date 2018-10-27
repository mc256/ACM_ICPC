#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int n;
	while (true){
		//cout << "-----" << endl;
		int dragon[20000], knight[20000];
		scanf("%d %d\n", &n, &m);
		if (n == 0 && m == 0){
			return 0;
		}

		for (int i = 0; i < n; i++){
			scanf("%d", &(dragon[i]));
		}
		for (int i = 0; i < m; i++){
			scanf("%d", &(knight[i]));
		}
		sort(&(dragon[0]),&(dragon[n]));
		sort(&(knight[0]),&(knight[m]));

		int i,j,total;
		i = j = total = 0;
		while (true){
			if (dragon[i] <= knight[j]){
				total += knight[j];
				i ++;
				j ++;
			}else{
				j ++;
			}
			if (i == n){
				printf("%d\n",total);
				break;
			}
			if (j == m){
				printf("Loowater is doomed!\n");
				break;
			}
		}
		
		//printf("%s\n", most.c_str());
	}

	return 0;
}
