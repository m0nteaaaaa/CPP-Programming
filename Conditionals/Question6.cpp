// Write a program to find out if the given intput is vowel or consonant.

#include <iostream>
using namespace std;

int main() {
    char character;
    cin >> character;
    
    switch(character) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }
    return 0;
}
