// Rverse the digits of a number

#include<iostream>
using namespace std;
int main() {
    int num, ans = 0;
    cout<< "Enter your number: ";
    cin >> num;
    if (num == 0) {
        cout<<ans; 
    } 
    else {
        while(num>0){
            int ans = num%10;
            num/=10;
            cout<<ans;
        }
        }
    return 0;
}
