#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,7,11,13,19,27};
    int key;
    cout<<"Enter the element to be searched : "<<endl;
    cin>>key;
    
    int s = 0, e=sizeof(arr)/sizeof(arr[0]);
    int mid  = (s+e)/2;
    while(s<=e){
        if(arr[mid] == key){
            cout<<"Element present at "<<mid<<endl;
            return 1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    cout<<"Not found"<<endl;

    return 0;
}
