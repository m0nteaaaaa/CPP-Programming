/*

Numerical Rectangular Pattern

1234567
2345671
3456712
4567124
5671234
6712345
7123456

*/

#include<iostream>
using namespace std;
int main(){

    int r;
    cout<<"Enter the number of rows : ";
    cin>>r;
    for(int i=1 ;i<=r;i++){
        for(int j =i ;j<=r;j++){
            cout<<j;
        }
        for(int k = 1;k<=(i-1);k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}