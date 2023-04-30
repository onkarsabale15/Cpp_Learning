#include<iostream>
using namespace std;
int main(){
    int leng;
    cout<<"Enter the Length of the array: ";
    cin>>leng;
    cout<<"Enter the numbers for array differentiated by space :";
    int a[leng];
    for (int i = 0; i<leng; i++){
        int x;
        cin>>x;
        a[i]=x;
    };
    cout<<"[";
    for (int i = 0;i<leng;i++){
        cout<<a[i];
        if (i!=(leng-1)){
        cout<<", ";
    };
    };
    cout<<"]";
    return 0;
};