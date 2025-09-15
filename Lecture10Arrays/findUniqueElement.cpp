/*
you have been given an integer array list (arr) of size n, where n is equal to [2m+1]. Now, in the given array list 'M' numbers are present twice
and one number is present only once. You need to find and return that number which is unique in the array / list. 
NOTE : Unique element is always present in the array / list according to the given condition
Input : 7-> 2,3,1,6,3,6,2
Output : 1
*/
#include<iostream>
using namespace std;

void findUniqueElement(int *arr, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    cout<<"Unique Element is : ";
    cout<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    findUniqueElement(arr,n);

    return 0;
}