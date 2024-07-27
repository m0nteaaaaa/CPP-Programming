// Print the first multiple of 5 which is also a multiple of 7.


#include<iostream>
using namespace std;
int main(){

    for(int i = 5 ;; i+=5){
        if(i%7==0){
            cout<<i;
            break;
        }
    }
    return 0;
}