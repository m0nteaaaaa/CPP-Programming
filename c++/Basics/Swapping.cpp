//It is a simple "Swapping Program Using 3 variable"
#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cin>>a;
    cin>>b;
    cout<<"Before Swapping a =  "<<a<<endl;
    cout<<"Before Swapping b = "<<b<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"After Swapping a = "<<a<<endl;
    cout<<"After Swapping b = "<<b<<endl;
    return 0;
}