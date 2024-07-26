// Find the maximum of Three Numbers using if Else Statements

#include<iostream>
using namespace std;
int main(){

    int num1,num2,num3;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
    cout<<"Enter Third Number : ";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"Number 1 is Greater";
    }
    else if(num2>num1 && num2>num3){
        cout<<"Number 2 is Greater";
    }
    else{
        cout<<"Number 3 is Greater";
    }
    return 0;
}