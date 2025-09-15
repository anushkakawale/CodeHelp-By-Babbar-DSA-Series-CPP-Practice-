#include<bits/stdc++.h>
using namespace std;

vector<int> findAllDuplicates(vector<int> &arr){
    vector<int> result;
    for(int i=0; i<arr.size(); i++){
        int index = abs(arr[i])-1;
        if(arr[index]<0){
            result.push_back(abs(arr[i]));
        }else{
            arr[index]=-arr[index];
        }
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    vector<int> arr;
    int n1;
    for(int i=0; i<n; i++){
        cin>>n1;
        arr.push_back(n1);
    }
    vector<int> duplicates = findAllDuplicates(arr);
    for(int d : duplicates){
        cout<<d<<" ";
    }
    return 0;
}