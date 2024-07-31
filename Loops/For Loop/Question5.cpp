// count the number of digits for a given number n

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter your number: ";
    cin >> num;
    if (num == 0) {
        sum = 1; 
    } else {
        for (int i = num; i!= 0; i /= 10) {
            sum++;
        }
    }

    cout << "The number of digits are: " << sum;
    return 0;
}
