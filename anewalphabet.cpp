#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;
    while (cin.get(c)){
        switch(c) {
            case 'a': cout << "@"; break;
            case 'b': cout << "8"; break;
            case 'c': cout << "("; break;
            case 'd': cout << "|)"; break;
            case 'e': cout << "3"; break;
            case 'f': cout << "#"; break;
            case 'g': cout << "6"; break;
            case 'h': cout << "[-]"; break;
            case 'i': cout << "|"; break;
            case 'j': cout << "_|"; break;
            case 'k': cout << "|<"; break;
            case 'l': cout << "1"; break;
            case 'm': cout << "[]\\/[]"; break;
            case 'n': cout << "[]\\[]"; break;
            case 'o': cout << "0"; break;
            case 'p': cout << "|D"; break;
            case 'q': cout << "(,)"; break;
            case 'r': cout << "|Z"; break;
            case 's': cout << "$"; break;
            case 't': cout << "']['"; break;
            case 'u': cout << "|_|"; break;
            case 'v': cout << "\\/"; break;
            case 'w': cout << "\\/\\/"; break;
            case 'x': cout << "}{"; break;
            case 'y': cout << "`/"; break;
            case 'z': cout << "2"; break;
            case 'A': cout << "@"; break;
            case 'B': cout << "8"; break;
            case 'C': cout << "("; break;
            case 'D': cout << "|)"; break;
            case 'E': cout << "3"; break;
            case 'F': cout << "#"; break;
            case 'G': cout << "6"; break;
            case 'H': cout << "[-]"; break;
            case 'I': cout << "|"; break;
            case 'J': cout << "_|"; break;
            case 'K': cout << "|<"; break;
            case 'L': cout << "1"; break;
            case 'M': cout << "[]\\/[]"; break;
            case 'N': cout << "[]\\[]"; break;
            case 'O': cout << "0"; break;
            case 'P': cout << "|D"; break;
            case 'Q': cout << "(,)"; break;
            case 'R': cout << "|Z"; break;
            case 'S': cout << "$"; break;
            case 'T': cout << "']['"; break;
            case 'U': cout << "|_|"; break;
            case 'V': cout << "\\/"; break;
            case 'W': cout << "\\/\\/"; break;
            case 'X': cout << "}{"; break;
            case 'Y': cout << "`/"; break;
            case 'Z': cout << "2"; break;
            default: cout << c;
        }        
    }
    cout << endl;    
}
