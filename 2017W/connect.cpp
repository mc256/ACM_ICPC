#include <iostream>
using namespace std;

void rstring(int n){
	if (n == 0){
		cout << "0";
	}else if (n == 1){
		cout << "1";
	}else{
		rstring(n - 1);
		rstring(n - 2);
	}
	
}

int main(){
	int count = 11;
	for (int i = 0; i < count; i ++){
		cout << "n=" << i << " : ";
		rstring(i);
		cout << endl;
	}
}
