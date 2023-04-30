#include <iostream>
using namespace std;
int main(){
    cout<<"Enter your choice from below : "<<endl;
    cout<<"1.   Check if Even."<<endl;
    cout<<"2.   Check the sign of the number."<<endl;
    cout<<"3.   Exit."<<endl;
    cout<<"Your Choice : ";
    int choice;
    int num;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter the number  : ";
            cin>>num;
            if(num%2==0){
                cout<<"The entered Number is Even Number."<<endl;
            }else{
                cout<<"The entered number is odd number."<<endl;
            };
            break;
        case 2:
            cout<<"Enter the number  : ";
            cin>>num;
            if(num<0){
                cout<<"The Number is Negative."<<endl;
            }else if(num>0){
                cout<<"The Number is Positive"<<endl;
            }else{
                cout<<"The Number is 0 which is neighter positive nor negative."<<endl;
            };
            break;
        case 3:
            break;
        default:
            break;
    };
    return 0;
}