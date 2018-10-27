#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> dictionary;
#define FORIT(i,c) for (__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)

int main(){
    string t;
    dictionary.clear();
    while (cin >> t){
        //cout << t << endl;
        if (t == "def"){
            cin >> t;
            int val; cin >> val;
            dictionary[t] = val;
        }else if (t == "calc"){
            bool unknown = false;
            bool method = true; //+ true - false;
            int result = 0;
            while (cin >> t){
                cout << t << " ";
                if (!unknown){
                    if (t == "+"){
                        method = true;
                    }else if (t == "-"){
                        method = false;
                    }else if (t == "="){
                        bool done = false;
                        // map iterator operation
                        FORIT(i,dictionary) if (result == i->second) {
                            cout << i->first << endl;
                            done = true;
                            break;
                        }
                        if (!done) {
                            cout << "unknown" << endl;
                        }
                        break;
                    }else{
                        // map find() operation
                        if (!dictionary.count(t)){
                            unknown = true;
                        }else{
                            if (method){
                                result += dictionary[t];
                            }else{
                                result -= dictionary[t];
                            }
                        }
                    }                    
                    continue;               
                }else{
                    if (t == "="){
                        cout << "unknown" << endl;
                        break;
                    }
                }
            }
        }else if (t == "clear"){
            dictionary.clear();
        }
    }
    return 0;
}