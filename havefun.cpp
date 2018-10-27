#include <iostream>
using namespace std;


class Variable{
public:
    string name;
    int valueA;
    int valueB;
    Variable * next;
};

int sum = 0;
Variable * list = new Variable;

void setValue(string key, bool system){
    Variable * p = list;
    while (p->next != NULL){
        p = p->next;
        if (p->name == key){
			if (system){
	            p->valueA ++;				
			}else{
			    p->valueB ++;				
			}
            return;
        }
    }
    p->next = new Variable();
    p = p->next;
    p->name = key;
	if (system){
        p->valueA = 1;				
	}else{
	    p->valueB = 1;				
	}
}


int main(){
	int count;
	cin >> count;
	for (int i = 0; i < count; i++){
		string temp;
		cin >> temp;
		setValue(temp, true);
	}

	for (int i = 0; i < count; i++){
		string temp;
		cin >> temp;
		setValue(temp, false);
	}

	cout << sum << endl;

}
