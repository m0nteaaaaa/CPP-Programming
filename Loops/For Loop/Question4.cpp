// Print all the values between 1 and 50 except for the multiples of 3.

#include<iostream>
using namespace std;
int main(){

    int num = 50;
    int i = 1;
    while(i<num){
        if(i%3==0){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}