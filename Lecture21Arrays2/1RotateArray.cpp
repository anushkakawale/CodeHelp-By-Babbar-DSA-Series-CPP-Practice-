#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {4,5,6,7,8,1,2,3};
    cout<<"Array is : "<<endl;
    printArray(arr);
    int k=3;
    vector<int> temp(arr.size());
    for(int i=0; i<arr.size(); i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    arr = temp;
    cout<<"Rotated Array is : "<<endl;
    printArray(arr);
    return 0;
}