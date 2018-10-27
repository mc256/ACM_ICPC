#include <iostream>     // cout
#include <limits>       // numeric_limits

using namespace std;

int main () {
  cout << boolalpha; // print true or false instead of 1 or 0.
  cout << "Maximum value for short: " << numeric_limits<short>::max() << endl;
  cout << "Non-sign bits in short: " << numeric_limits<short>::digits << endl;

  cout << "Maximum value for int: " << numeric_limits<int>::max() << endl;
  cout << "Non-sign bits in int: " << numeric_limits<int>::digits << endl;

  cout << "Maximum value for long: " << numeric_limits<long>::max() << endl;
  cout << "Non-sign bits in long: " << numeric_limits<long>::digits << endl;
  
  cout << "Maximum value for long long: " << numeric_limits<long long>::max() << endl;
  cout << "Non-sign bits in long long: " << numeric_limits<long long>::digits << endl;

  long long sum = 1;
  for (int i = 0; i < 35; i ++){
    cout << i << "\t\t" << sum << endl;
    sum = sum << 1;
  }

  /*
0               1
1               2
2               4
3               8
4               16
5               32
6               64
7               128
8               256
9               512
10              1024
11              2048
12              4096
13              8192
14              16384
15              32768
16              65536
17              131072
18              262144
19              524288
20              1048576
21              2097152
22              4194304
23              8388608
24              16777216
25              33554432
26              67108864
27              134217728
28              268435456
29              536870912
30              1073741824
31              2147483648
32              4294967296
33              8589934592
34              17179869184
  */
  return 0;
}