#include <iostream>
using namespace std;

int main(){
	unsigned int width, height, i, j;
	unsigned int area;
	int off = -1;
	char temp;
	while (cin >> height >> width) {
		area = 0;
		for (i = 0; i < height; i++){
			for (j = 0; j < width; j++){		
				char c;
				cin >> c;
				if ((c == '/') || (c == '\\')){
					off *= -1;
					area += 1;
				}else if ((off > 0)&&(c == '.')){
					area += 2;
				}	
			}
		}
		area /= 2;
		cout << area << endl;
	}
	return 0;
}
