// Count the number of digits for a given number n

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter your number : ";
    cin>>num;

    int sum =0;
    while(num>0){
        sum++;
        num = num/10;
    }
    cout<<"The Number of Digits are : "<<sum;
    return 0;
}