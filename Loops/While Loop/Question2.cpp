// Print the sum of n natural numbers, where n is the input.

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum = 0;
    int i = 1;
    while(i<=num){
        sum+=i;
        i++;
    }
    cout<<"The Sum is : "<<sum;

    return 0;
}