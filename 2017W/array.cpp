/*
18
*/
#include <iostream>
using namespace std;

void arrayCopy(int[] src, int srcPos, int[] dest, int destPos, int length){
	for (int i = 0; i < length; i++){
		dest[destPos + i] = src[srcPos + i];	
	}
}


void binarySortRecursion(int[] array, int begin, int end, int[] buffer){
	if ((end - begin) > 1) {
		int middle = (end + begin) / 2;

		binarySortRecursion(array, begin, middle, buffer);
		binarySortRecursion(array, middle, end, buffer);

		int i = begin;
		int j = middle;
		int k = begin;

		while (true){
			if (array[i] < array[j]){
				buffer[k++] = array[i++];
			}else{
				buffer[k++] = array[j++];
			}
			if (i >= middle){
							
				break;
			}
			if (j >= end){
				break;
			}

		}

		

	}
}

void binarySort(int[] array){
	int buffer[array];
	binarySortRecursion(array, 0, sizeof(array), buffer);
}

int main(){
	cout << "Number:" << flush;

	int count;
	cin >> count;
	cout << "Please enter the list:" << flush;

	int k[count];

	for (int i = 0; i < count; i ++){
		cin >> k[i];
	}

	cout << "this origin list is:" << endl;
	for (int i = 0; i < count; i ++){
		cout << k[i] << " ";
	}
	cout << endl;

	

	return 0;
}
