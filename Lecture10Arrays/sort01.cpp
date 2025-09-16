#include<iostream>
using namespace std;

/*
void SortUsingCount(int arr[], int n){
    int countOne = 0, countZero = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            countOne += 1;
        }else if(arr[i] == 0){
            countZero += 1;
        }
    }
    int index = 0;
    for (int i = 0; i < countZero; i++) {
        arr[index++] = 0;
    }
    for (int i = 0; i < countOne; i++) {
        arr[index++] = 1;
    }
}
*/

void SortUsingPointers(int arr[], int n){
    int left = 0, right = n-1;
    while(left < right){
        while(arr[left]==0 && left < right){
            left++;
        }
        while(arr[right]==1 && left < right){
            right--;
        }
        if(arr[left]==1 && arr[right]==0 && left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }

    }
}

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,0,1,0,1,1,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting Array is : ";
    PrintArray(arr, n);
    //SortUsingCount(arr, n);
    SortUsingPointers(arr, n);
    cout<<"After sorting Array is : ";
    PrintArray(arr, n);
    return 0;
}