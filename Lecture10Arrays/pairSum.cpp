/*
Problem statement
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
Note:Each pair should be sorted i.e the first value should be less than or equals to the second value. 
Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> pairSum(vector<int>& arr, int sum){
    vector<vector<int>> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == sum){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n, sum;
    cout<<"Enter size of an array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of an array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum you want to pair with : ";
    cin>>sum;

    vector<vector<int>> ans = pairSum(arr,sum);
    
    cout << "Pairs with sum " << sum << " are:\n";
    for(auto &p : ans){
        cout << "(" << p[0] << ", " << p[1] << ")\n";
    }
    
    return 0;
}