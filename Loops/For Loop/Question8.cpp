// Find the sum of the following series

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int result = 0;
    for (int i =1;i<=num;i++){
        if(i%2==0){
            result+=i;
        }
        else{
            result+=i;
        }
    }
    cout<<result<<endl;
    return 0;
}