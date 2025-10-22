#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {0,1,0,3,12};
    int i=0;
    for(int j=0; j<arr.size(); j++){
        if(arr[j]!=0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
    printArray(arr);
    return 0;
}