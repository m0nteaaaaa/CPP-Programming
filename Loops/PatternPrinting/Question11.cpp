/*

Numerical Triangular Hollow Repeating Pattern

    1   
   2  2
 3     3
444444444

*/

#include<iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter the number of rows : ";
    cin >> r;

    if (r < 1) {
        cout << "Number of rows must be at least 1." << endl;
        return 1;
    }
    int n = 1;
    for (int i = 1; i <= r; ++i) {
        for (int j = 0; j < r - i; ++j) {
            cout << " ";
        }

        if (i == 1) {
            cout << n;
        } else if (i == r) {
            for (int j = 0; j < 2 * i - 1; ++j) {
                cout << n;
            }
        } else {
            cout << n;
            for (int j = 0; j < 2 * i - 3; ++j) {
                cout << " ";
            }
            cout << n;
        }
        cout << endl;
        ++n; 
    }

    return 0;
}
