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
    // ternary Operator these are shorthand or one liners of if-else condition the syntax is as follows
    //(condition)?return_statement_to_execute_if_true:return_statement_to_execute_if_false
    int c = (a>b)?a:b;
    cout<<c<<endl;
    //unary operator cause it has only one operand
    //operand is something on which operations can be done
    // ++ --
    //value can be different based on the position at which we are using the operator
    //a++|++a ==> a=a+1 and a--||--a==>a=a-1 and while printing the value of these it will behahe like when we assign value
    //but it changes when we assign the values
    //c = a++ ==> firstly c = a and then a+=1
    //c = ++a ==> fristly it will increment a+=1 and then the incremented value of a to the c = a
    int x=1;
    cout<<(x++)<<endl;
    //shortcut assignment operators
    cout<<"shortcut assignment operators"<<endl;
    int d = 2;
    d += 1; //add 1
    cout<<d<<endl;
    d-=1; //subtract 1
    cout<<d<<endl;
    d*=5; //multiply by 5
    cout<<d<<endl;

    //Other Operators
    //sizeof(), new, delete, &(address_of_opperator), *(derefrencing operator)
    return 0;
}