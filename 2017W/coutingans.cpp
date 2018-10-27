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
	unsigned long int number = 20001;
	while (number < 1000000000){
		number ++;

		unsigned long int ones = 0;
		for (int i = 1; i <= number; i++){
			ones += findOnes(i);						
		}
		if (ones == number){
			cout << number << endl;
			cout << "YES" << endl;
		}else{
			//cout << "NO" << endl;
		}
		
	}
	return 0;
}
