/*
Write a Program To Divide People into 3 age Groups Depending upon their age.
Age             Output
Below 12        Child
Btwn 12 and 18  Teenager
Above 18        Adult
*/

#include<iostream>
using namespace std;
int main(){

    int age;
    cin>>age;
    if (age<12){
        cout<<"child";
    }
    else if(age<=12 && age>=18){
        cout<<"Teenager";
    }
    else{
        cout<<"Adult";
    }
    return 0;
}