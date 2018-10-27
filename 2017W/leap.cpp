#include <iostream>
using namespace std;


int main(){
	int year;
	while (true){
		cin >> year;
		if (year == -1){
			break;
		}

		bool leap = false;
		if ((year % 4) == 0){
			leap = true;
			if ((year % 100) == 0){
				leap = false;
				if ((year % 400) == 0){
					leap = true;
				}
			}	
		}
		if (leap){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}
