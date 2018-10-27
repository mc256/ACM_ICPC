#include <iostream>
#include <string>

using namespace std;

class Variable{
public:
    string variable_name;
    int value;
    Variable * next;
};

Variable * list = new Variable;

void setValue(string key, int value){
    Variable * p = list;
    while (p->next != NULL){
        p = p->next;
        if (p->variable_name == key){
            p->value = value;
            return;
        }
    }
    p->next = new Variable();
    p = p->next;
    p->variable_name = key;
    p->value = value;
}

int getValue(string key){
    Variable * p = list;
    while (p->next != NULL){
        p = p->next;        
        if (p->variable_name == key){
            return p->value;
        }
    }
    return 2333; // that means no value
}

string findNameByValue(int value){
    Variable * p = list;
    while (p->next != NULL){
        p = p->next;        
        if (p->value == value){
            return p->variable_name;
        }
    }
    return "unknown";
}

int main(){
    string t;
    while (cin >> t){
        //cout << t << endl;
        if (t == "def"){
            cin >> t;
            int val;
            cin >> val;
            setValue(t,val);
            //cout << "set val:"<<t<<val << "   \ttest:" << getValue(t) << endl;
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
                        cout << findNameByValue(result) << endl;
                        break;
                    }else{
                        int val = getValue(t);
                        if (val == 2333){
                            unknown = true;
                        }else{
                            if (method){
                                result += val;
                            }else{
                                result -= val;
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
            list = new Variable;
        }
    }
    return 0;
}