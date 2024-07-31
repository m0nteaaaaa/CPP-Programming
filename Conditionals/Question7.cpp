// Write a program is positive,negative or zero.

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num>0){
        cout<<"The Number is Positive";
    }
    else if(num==0){
        cout<<"The number is Zero";
    }
    else{
        cout<<"The Number is Negative";
    }
    return 0;
}