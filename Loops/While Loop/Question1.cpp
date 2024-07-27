// Print from 1 to  n natural numbers, where n is the input.

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int i = 1; //loop variable
    while(i<=num){ // condition
        cout<<i<<endl;
        i++; //increment
    }
    return 0;
}