#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void updating(int arr[], int n){
    arr[1] = 10;
    cout<<"Updating inside the updating function"<<endl;
    printArray(arr,n);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    cout<<"Printing in main function"<<endl;
    printArray(arr,n);

    updating(arr, n);

    cout<<"After updating in main function"<<endl;
    printArray(arr,n);

    return 0;
}