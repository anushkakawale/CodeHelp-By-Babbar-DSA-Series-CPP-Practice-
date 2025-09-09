#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array : \n";
    cin>>n;
    int arr[n];
    int sum = 0;
    cout<<"\nEnter elements of an array\n";
    for(int i=0;i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of all elements of array is : "<<sum;

    return 0;

}