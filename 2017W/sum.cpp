#include <iostream>
#include <string>
using namespace std;

int count = 0;
unsigned int n;

void deepSearch(unsigned int sum, unsigned int index){
	if (sum == n){
		cout << "sum:" << sum << " index:" << index << " perfect"<< endl;
		count ++;
		return;
	}
	if (index > n) {
		cout << "sum:" << sum << " index:" << index << " index > n" << endl;
		return;
	}
	if (sum > n){
		cout << "sum:" << sum << " index:" << index << " sum > n" << endl;
		return;
	}

	//use the index or not use the index;
	//use
	cout << "sum:" << sum << " index:" << index << endl;
	deepSearch(sum + index, index + 1);
	//not using
	deepSearch(sum, index + 1);

}

int main(){
	while (true){
		cin >> n;
		if (n == 0){
			break;
		}
		count = 0;
		deepSearch(0, 1);
		cout << count << endl;		
	}
	return 0;
}
