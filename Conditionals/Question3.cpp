// Write a Program to print the value if it is even and divisible by 3

#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;
    if(num%2==0 && num%3==0){
        cout<<"The number is Even and divisible By Three";
    }
    else{
        cout<<"The number is not even and not divisible by Three";
    }
    return 0;
}