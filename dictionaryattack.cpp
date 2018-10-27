#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    scanf("%d\n", &n);

    string dictionary[1000];
    for (int i = 0; i < n; i++){
        getline(cin, dictionary[i]);
        //printf("%d-%d-%d-%d-%d-%d-%d:%d\n",dictionary[i][0],dictionary[i][1],dictionary[i][2],dictionary[i][3],dictionary[i][4],dictionary[i][5],dictionary[i][6],dictionary[i].length());
        //dictionary[i][dictionary[i].length() - 1] = 0;
        //printf("%s4\n",dictionary[i].c_str());
        //return 0;
    }
    
    string buf;
    while (getline(cin, buf)){
        cout << buf << endl;
        bool pass = true;
        for (int i = 0; i < n; i++){
            if (buf.length() == dictionary[i].length()){
                pass = false;
                int number_count = -1;
                int number[4];
                int diff_count = -1;
                int diff[8];
                for (int j = 0; j < buf.length(); j++){
                    // check number
                    if (buf[j] >= '0' && buf[j] <= '9'){
                        number[++ number_count] = j;
                    }else if (buf[j] != dictionary[i][j]){
                        diff[++ diff_count] = j;
                    }
                    if (number_count == 3){
                        pass = true;
                        break;
                    }
                    if (diff_count == 8){
                        pass = true;
                        break;
                    }
                }
                printf("%s diff: num-%d cha-%d \n",dictionary[i].c_str(), number_count + 1, diff_count +1);
            }
        }
        if (pass){
            printf(" pass:  %s\n",buf.c_str());
            
        }
    }
}
