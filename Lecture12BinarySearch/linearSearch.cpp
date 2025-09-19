#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array : \n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array : \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nDisplay elements of an array: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"\nEnter element to be searched";
    cin>>key;
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == key){
            cout<<"\nElement found at position : "<<i+1<<endl;
        }
    }
    if(i==n-1){
        cout<<"Element not found"<<endl;
    }
    return 0;
}