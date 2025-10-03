#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[] = {1,2,3,3,3,3,4,5,6};
    int key = 3, n=sizeof(arr)/sizeof(arr[0]);


    int first = firstOcc(arr, n, key);
    int last = lastOcc(arr,n,key);

    cout<<"First Occurrence at Position : "<<first<<endl;
    cout<<"Last Occurrence at Position : "<<last<<endl;

    cout<<"Total number of Occurrence of "<<key<<" is : "<<last-first+1;

    return 0;
}