// Find the sum of digits in a given number n

#include<iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout<< "Enter your number: ";
    cin >> num;
    if (num == 0) {
        sum = 0; 
    } 
    else {
        while(num>0){
            int LastDigit = num%10;
            sum += LastDigit;
            num/=10;
        }
        }
    cout<<"The number of digits are: " << sum;
    return 0;
}
