#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int buf[3];
    cin >> buf[0] >> buf[1] >> buf[2];
    sort (buf, buf + 3);
    string t;
    cin >> t;

    if (t.c_str()[0] == 'A'){
        cout << buf[0];
    }else if (t.c_str()[0] == 'B'){
        cout << buf[1];
    }else if (t.c_str()[0] == 'C'){
        cout << buf[2];
    }
    cout << ' ';
    if (t.c_str()[1] == 'A'){
        cout << buf[0];
    }else if (t.c_str()[1] == 'B'){
        cout << buf[1];
    }else if (t.c_str()[1] == 'C'){
        cout << buf[2];
    }
    cout << ' ';
    if (t.c_str()[2] == 'A'){
        cout << buf[0];
    }else if (t.c_str()[2] == 'B'){
        cout << buf[1];
    }else if (t.c_str()[2] == 'C'){
        cout << buf[2];
    }
    cout << ' ';
    cout << endl;
    
}
