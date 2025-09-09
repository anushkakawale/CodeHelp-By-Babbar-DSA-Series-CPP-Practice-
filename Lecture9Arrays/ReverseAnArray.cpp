//reverse an array
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for(int i=0; i<n/2; i++){
    //     int temp=arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = temp;
    // }
    int start = 0, end = n-1;
    while(start < end){
        // int temp=arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}