/* Print " ODD " if the input value is odd , otherwise print "Even"
Note : Input Value is between 1 and 10^6
*/
#include<iostream>
using namespace std;
int main(){

    int num;
    cin>>num;
    if (num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}