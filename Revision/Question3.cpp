// Design a Calculator to perform basic airthmetic operations( +.-,/,*,%)

#include<iostream>
using namespace std;
int main(){

    int num1 , num2;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Sercond Number : ";
    cin>>num2;
    char symbol;
    cout<<"What Operation do u want to perform : +  - * / % : ";
    cin>>symbol;
    switch (symbol){
        case '+':
        cout<<"Sum is : "<<num1+num2;
        break;
        case '%':
        cout<<"Remainder is : "<<num1%num2;
        break;
        case '/':
        cout<<"Divison is : "<<num1/num2;
        break;
        case '*':
        cout<<"Product is : "<<num1*num2;
        break;
        case '-':
        cout<<"Difference is : "<<num1-num2;
        break;
        default:
        cout<<"Enter a valid Operator!! ";
        break;
    }

    return 0;
}