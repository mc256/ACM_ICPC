#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int getByIndex(long long int index){
	int situtation = index % 4;
	if (situtation == 2 ||situtation == 3){
		return 1;
	}else{
		return 0;
	}
}


int main(){
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	long long int indexA, indexB, cur;
	cur = 1;	
	for (int i = 1; i <= n; i++){
		cur *= 2;
		if (a[i - 1] == '0'){
			if (getByIndex(cur) == 1){
				cur --;
			//	printf("%c left\n", a[i - 1]);
			//}else{
			//	printf("%c right\n", a[i -1]);
			}
		}else{
			if (getByIndex(cur) == 0){
				cur --;
			//	printf("%c left\n", a[i - 1]);
			//}else{
			//	printf("%c right\n", a[i -1]);
			}
		}
	}	
	indexA = cur;
	cur = 1;
	for (int i = 1; i <= n; i++){
		cur *= 2;
		if (b[i - 1] == '0'){
			if (getByIndex(cur) == 1){
				cur --;
			//	printf("%c left\n", a[i - 1]);
			//}else{
			//	printf("%c right\n", a[i -1]);
			}
		}else{
			if (getByIndex(cur) == 0){
				cur --;
			//	printf("%c left\n", a[i - 1]);
			//}else{
			//	printf("%c right\n", a[i -1]);
			}
		}
	}
	indexB = cur;
	//cout << indexA << ":" << indexB << endl;
	if (indexA > indexB){
		cout << indexA - indexB - 1 << endl;
	}else{
		cout << indexB - indexA - 1 << endl;
	}

	// Calculate the distance
	return 0;
}
