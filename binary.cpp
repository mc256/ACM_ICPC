#include <iostream>
using namespace std;
class Node{
public:
	long long value;
	Node * next;
};

Node * list = new Node();

void insert(long long number){
	Node * p = list;
	while (p->next != NULL){
		Node * hold = p;
		p = p->next;
		if (p->value > number){
			Node * n = new Node();
			n->value = number;
			n->next = p;
			hold->next = n;
			return;
		}
	}			
	Node * n = new Node();
	n->value = number;
	n->next = NULL;
	p->next = n;
}

int main(){
	int number;
	cin >> number;
	if (number < 3){
		cout << "impossible" << endl;
		return 0;
	}
	
	for(int i = 0; i < number; i++){
		long long t;
		cin >> t;
		insert(t);
	}

	Node * p = list->next;
	
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
