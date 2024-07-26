//Write a program to print the value if it is divisible by 3 or 5.

#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<"The number is divisble by 3 or 5";
    }
    else{
        cout<<"The number is not divisble by 3 or 5";
    }
    return 0;
}