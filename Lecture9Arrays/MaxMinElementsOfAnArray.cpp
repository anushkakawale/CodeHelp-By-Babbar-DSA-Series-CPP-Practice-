#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMaxFunction(int arr[], int n){
    int maxi = arr[0];
    for(int i=0; i<n; i++){
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

int getMin(int arr[], int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout<<"Enter size of an array : \n";
    cin>>n;

    int arr[n];

    cout<<"Enter elements in an array : \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     
    int maximum = getMax(arr, n);
    int minimum = getMin(arr, n);

    cout<<"Maximum element is : "<<maximum<<endl;
    cout<<"Minimum element is : "<<minimum<<endl;

    cout<<"Maximum element is : "<<getMax(arr,n)<<endl;
    cout<<"Minimum element is : "<<getMin(arr,n);
    cout<<"----------------------------------------------"<<endl;
    cout<<"Maximum element using max function : "<<getMaxFunction(arr,n);
    return 0;
}