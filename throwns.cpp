#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    string temp;
    vector<int> data;
    data.clear();
    for(int j = 0; j < k; j++){
        cin >> temp;
        if (temp == "undo"){
            int num; cin >> num;
            for(int i = 0; i < num; i++){
                if (data.size() != 0)  {
                    data.pop_back();
                }else {
                    break;
                }
            }
        }else{
            data.push_back(stoi(temp));
        }
    }

    for (int i = 0; i < data.size(); i++){
        sum += data[i];
        sum %= n;
    }
    cout << ((sum < 0)? (n + sum): sum)  << endl;
    return 0;
}