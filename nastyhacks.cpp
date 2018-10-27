#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		long long r, e, c;
        cin >> r >> e >> c;
        long long k = e - c - r;
		if (k == 0){
			cout << "does not matter" << endl;
		}else if (k > 0){
			cout << "advertise" << endl;
		}else{
            cout << "do not advertise" << endl;
        }
	}
	return 0;
}
