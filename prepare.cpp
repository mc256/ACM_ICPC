#include <iostream>  // get, getline
#include <cstdio>    // printf, scanf
#include <algorithm> // sort
#include <string>    // string
#include <utility>   // pair
#include <list>      // list
#include <vector>    // vector
#include <map>       // map

#define FORIT(i,c) for (__typeof__((c).begin()) i = (c).begin(); i != (c).end(); i++)

using namespace std;

long long gcd(long long a, long long b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main(){    
    // Input string
    string t;
    getline(cin, t);
    
    // Input char
    char c;
    cin.get(c);

    // GCD
    cout << gcd(991,3) << endl;

    // pair
    pair<int,string> p = make_pair(2,"hello world");
    cout << p.first << "|" << p.second << endl;

    // vector
    //O(1) : insertion and removal of elements at the end
    //O(n) : insertion and removal of elements at the beginning or in the middle
    vector<int> v; v.clear();
    v.push_back(1); v.push_back(2); v.push_back(3);
    int n = v.back(); v.pop_back(); cout << n << endl;  // 3
    
    // list
    //O(1) : insertion and removal of elements at the at the beginning or the end, or in the middle
    //O(n) : accessing
    list<int> l;
    l.push_back(0); l.push_back(1); l.push_front(2); l.push_front(3); //3201
    l.insert(++ ++ l.begin(), 9); //32901
    FORIT(i,l) cout << " " << *i;
    cout << endl;


    // map
    // use count() to find
    map<string,int> m;
    m["gg"] = 233; cout << m["gg"] << "|" << m["nosense"] << endl; //233|0
    cout << m.count("gg") << "|" << m.count("nosense") << endl; // m["nosense"] == 0
    m.erase("nosense"); cout << m.count("gg") << "|" << m.count("nosense") << endl;

    return 0;
}