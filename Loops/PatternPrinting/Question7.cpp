/*

Numerical Rectangular Pattern

123456
123456
123456
123456

*/

#include<iostream>
using namespace std;
int main(){

    int r;
    cout<<"Enter the number of rows : ";
    cin>>r;
    for(int i =1 ;i<=r;i++){
        for (int j = 1;j<=r+2;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}