#include<iostream>
using namespace std;
int main(){
    //Arithmitic operators include +,-,*,/,%
    // % (modulo) operator gives us the ramainder
    int a = 11;
    int b  = 2;
    cout << a%b<<endl;

    //logical operators <,>,<=,>=,==,!=

    if(a>b){
        cout<<"a is greater than b"<<endl;
    }else{
        cout<<"a is not greater than b";
    };
    //relational operators
    //&& is logical and || is logical or ! is not/negation operator
    if(!true || false){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    };
    //Bitwise Operators:=    & bitwise and, | bitwise or, ^ bitwise xor, << left shift, >> right shift, ~ negation
    int N = 12;
    int Y = 2;
    //cout << (2|1)<<endl;
    //
    cout << (2&1)<<endl;
    //cout << (2^1)<<endl;
    //Left Shift <<
    // N = N*2^Y
    cout << (N<<Y)<<endl;
    //Right Shift >>
    //N = N/2^Y
    cout << (N>>Y)<<endl;
    //negation operator just flips the bits like n = 10 = 1010 then ~n = 0101 = 5
    cout << (~4)<<endl;
    //int c = (a>b)?a:b;
    //cout<<c;
    return 0;
}