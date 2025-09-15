#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> arr, int n){
    unordered_map<int,int> countMap;
    for(int num: arr){
        countMap[num]++;
    }
    unordered_set<int> occurrences;
    for(auto& pair: countMap){
        occurrences.insert(pair.second);
    }
    return occurrences.size() == countMap.size();
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
    bool occ = uniqueOccurrences(arr,n);
    if(occ){
        cout<<"Unique occurrences"<<endl;
    }else{
        cout<<"No Unique occurrences"<<endl;
    }
    return 0;
}