#include <iostream>
using namespace std;
struct Node{
	long long value;
	struct Node * next;
};

struct Node * list = new Node();

void insert(long long number){
	struct Node * p = list;
	while (p->next != NULL){
		struct Node * hold = p;
		p = p->next;
		if (p->value > number){
			struct Node * n = new Node();
			n->value = number;
			n->next = p;
			hold->next = n;
			return;
		}
	}			
	struct Node * n = new Node();
	n->value = number;
	n->next = NULL;
	p->next = n;
}

int main(){
	int number;
	cin >> number;

	for(int i = 0; i < number; i++){
		long long t;
		cin >> t;
		insert(t);
	}

	struct Node * p = list->next;
	
	long long a = p->value;
	p=p->next;
	long long b = p->value;
	while (p->next != NULL){
		p = p->next;
		//cout << p->value << endl;
		if (a+b > p->value){
			cout << "possible" << endl;			
			return 0;
		}
		a = b;
		b = p->value;		
	}
	cout << "impossible" << endl;

	return 0;
}
