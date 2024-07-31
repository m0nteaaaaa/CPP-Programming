/*

Numerical Rectangular Repeating Pattern

1212121
2121212
1212121
2121121

*/

#include<iostream>
using namespace std;
int main(){

    int r,c;
    cout<<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter the number of columns : ";
    cin>>c;
    for(int i =1 ;i<=r;i++){
        for(int j = 1;j<=c;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
    return 0;
}