#include <iostream>
#include <string>
using namespace std;

int main(){
	unsigned n = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		int result = 1;
		for (int j = 0; j < temp.length(); j++){
			if (temp[j] == 'e' || temp[j] == 't'){
				result *= -1;
			}
		}
		if (result < 0){
			cout << "cc" << endl;
		}else{
			cout << "cw" << endl;
		}
	}
	return 0;
}
