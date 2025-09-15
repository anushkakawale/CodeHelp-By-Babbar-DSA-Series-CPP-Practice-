/*
An array of size 'n' containing each no from 1 to n-1 atleast once. There is a single int value i.e. present in the array twice.
Your task is to find duplicate integer value present in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
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
    int duplicate = findDuplicate(arr);
    cout<<"Duplicate number is : "<<duplicate;
    return 0;
}