#include <iostream>
#include <map>
using namespace std;

std::map<std::string, int> dict;

int main(){
	int count;
	cin >> count;
	for (int i = 0; i < count; i++){
		string temp;
		cin >> temp;
		dict[temp]++;
	}

	int sum = 0;
	for (int i = 0; i < count; i++){
		string temp;
		cin >> temp;
		int * val = &(dict[temp]);
		if ((*val) > 0){
			(*val)--;
			sum++;
		}
	}
	cout << sum << endl;

}
