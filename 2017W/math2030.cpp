#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "n=";
	cin >> n;
	double total_probability = 0;

	for (int i = 1; i <= n; i ++){
		double single_probability = 1 / ((2 * (double)i) + 1);
		total_probability = (total_probability * (i - 1) + single_probability) / i;
		double total_heads = total_probability * i;
		cout << "n=" << i << " p=" << total_probability << " times get head=" << total_heads << endl;
	}
}
