#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;
    bool flag = true;
    while (cin.get(c)){
        if (flag){
            printf("%c",c);
            flag = false;
        }else{
            if (c == '-'){
                flag = true;
            }else{
                flag = false;
            }
        }
    }
}
