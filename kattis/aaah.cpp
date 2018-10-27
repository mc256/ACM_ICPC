#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (s2.length() > s1.length()){
        cout << "no" << endl;
    }else{
        cout << "go" << endl;
    }
    return 0;
}