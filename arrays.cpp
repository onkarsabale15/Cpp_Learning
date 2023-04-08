#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    int arr1[7];
    int arr2[5] = {1,2,3,4,5};
    int arr3[10] = {456465,654564,54545,516};
    int arr4[]={111,5,9,654,65,89,51};
    //to access the element of a specific index in this we are accessinf the 5th indexed value
    cout << arr1[5]<<endl;
    //to get length of the array
    cout <<sizeof(arr2)/sizeof(arr2[0]) << endl;
    int arr2_size = sizeof(arr2)/sizeof(arr2[0]);
    //for travrsing the array 
    for(int idx = 0; idx<arr2_size; idx++){
        cout<<arr2[idx]<<" ";
    }
    return 0;
}