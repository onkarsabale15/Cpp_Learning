 #include <iostream>
 using namespace std;

//return_type function_name(input_type input_value){
//  logic_Of__Function
//}


void isLeapYear(int year){
    if(year%100 == 0){
        if(year%400 == 0){
            cout<< year<< "is Leap year!!";
        }else{
            cout<<year<< " is Not Leap year!!";
        };
    }else if(year%4 == 0){
        cout<< year<< "is Leap year!!";
    }else{
        cout<<year<< " is Not Leap year!!";
    };
};
int main(){
    isLeapYear(1900);
    return 0;
 }