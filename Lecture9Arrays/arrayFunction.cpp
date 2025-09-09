#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<<"Printing an array : \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(arr, 10);
    cout<<"Number of Elements in an Array : ";
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"\n";
    return 0;
}