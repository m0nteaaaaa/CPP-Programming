//Program to show all Miscellaneous Operators
#include<iostream>
using namespace std;
int main(){

    // sizeOf Operator
    // Condition ? Expression 1: Expression 2
    // Comma Operator
    // Dot and Arrow Operator
    // Casting Operator
    // &  Address Operator
    // * Pointer Operator

    int a = 4;
    cout<<sizeof(a)<<endl; // use of size of 
    int b = 6;
    bool c;
    a == b? c  = true : c  = false; // use of condition
    cout<<c<<endl;

    cout<<(&a)<<endl; // use of address operator

    int d = 4,5,6,8; // the value would be the last onee i.e 8

    return 0;
}