#include <iostream>
using namespace std;

void arrayCopy(int src[], int srcPos, int dest[], int destPos, int length){
    for (int i = 0; i < length; i ++) {
        dest[destPos + i] = src[srcPos + i];
    }
}

void sort(int array[], int begin, int end, int buffer[]){

    if ((end - begin) > 1){
        int middle = (end + begin) / 2;
        sort(array, begin, middle, buffer);
        sort(array, middle, end, buffer);
        
        int i = begin;
        int j = middle;
        int k = begin;
        while (true){
            if (array[i] < array[j]) {
                buffer[k ++] = array[i ++];
            }else{
                buffer[k ++] = array[j ++];
            }
            if (i >= middle){
                arrayCopy(array, j, buffer, k, end - k);
                break;
            }
            if (j >= end){
                arrayCopy(array, i, buffer, k, end - k);
                break;
            }
        }
        
        arrayCopy(buffer, begin, array, begin, end - begin);
    }
}

int main(int argc, const char * argv[]) {
    //Input
    int length;
    cout << "length of the array    => " << flush;
    cin >> length;
    int list[length];
    int buffer[length];
    cout << "please enter the array => " << flush;
    for (int i = 0; i < length; i++) {
        cin >> list[i];
    }
    
    //Sorting
    sort(list, 0, length, buffer);
    
    //Output
    cout << "Sorted:" << endl;
    for (int i = 0; i < length; i++) {
        cout << list[i] << " " ;
    }
    cout << endl;
    
    return 0;
}
