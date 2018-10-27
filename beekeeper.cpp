#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;
int checkv(string str){
	int count = 0;
	char cc;
	bool ct = false;
	for (int i = 0; i < str.length(); i++){
		if (ct){
			if (str[i] == cc){
				count ++;
				ct = false;
			}else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
				cc = str[i];
				ct = true;			
			}else{
				ct = false;
			}

		}else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
			ct = true;
			cc = str[i];
		}else{
			ct = false;
		}
	}
	return count;
}

int main(){
	int number;
	while (true){
		//cout << "-----" << endl;
		scanf("%d\n", &number);
		
		if (number == 0){
			return 0;
		}

		string most;
		int most_count;
		int count;
		string t;

		getline(cin, t);
		count = checkv(t);

		most = t;
		most_count = count;


		for (int i = 1; i < number; i++){	
			getline(cin, t);
			count = checkv(t);
			//cout << t << "\t" << count << endl;
			if (count > most_count){
				most = t;
				most_count = count;
			}
		}
		printf("%s\n", most.c_str());
	}

	return 0;
}
