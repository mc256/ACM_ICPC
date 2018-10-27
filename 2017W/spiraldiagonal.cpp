#include <iostream>
using namespace std;


int main(){
	long k;
	while (true){
		cin >> k;
		if (k == -1){
			break;
		}
		unsigned long int length = 2 * k + 1;
		unsigned long int sum = 0;
		unsigned long int an = 1;
		for (int i = 1; i <= length; i ++){
			sum += an;
			an = an + 2 * i;
		}
		cout << sum << endl;
		
	}
	return 0;
}
