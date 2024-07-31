/* Write a program to check wether the input is an character or a number.
'a' - 'z'       This is Lowercase
'A' - 'Z'       This is Uppercase
'0' -  '9'      This is Numeric
*/

#include<iostream>
using namespace std;
int main(){

    char character;
    cout<<"Enter Your character : ";
    cin>>character;
    if(character>='A'&& character<='Z'){
        cout<<"This is the Upper case value:"<<character<<endl;
    }
   else if(character>='a'&&character<='z'){
        cout<<"this is lower case letter: "<<character<<endl;
    }
    else if(character>='0'&&character<='9'){
        cout<<"It's an integer digit:"<<character<<endl;
    }
    return 0;
}