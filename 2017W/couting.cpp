#include <iostream>
using namespace std;

unsigned int findOnes(unsigned int theNumber){
	unsigned int temp = theNumber;
	unsigned int result = 0;

	while (temp > 0){
		if ((temp % 10) == 1) {
			result ++;
		}
		temp = temp / 10;
	}
	return result;
}


int main(){
	unsigned long long number;
	int correct[] = {1,199981,199982,199983,199984,199985,199986,199987,199988,199989,199990,200000,200001,1599981,1599982,1599983,1599984,1599985,1599986,1599987,1599988,1599989,1599990,2600000,2600001,13199998,35000000};
	while (true){
		cin >> number;
		if (number == 0){
			break;
		}

		bool yes = false;
		for (int i = 0; i < 28; i++){
			if (correct[i] == number){
				yes = true;
				break;
			}
		}
		
		if (yes || number <= 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
