#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// vector<int> mergeArrays(vector<int> arr1, int n, vector<int> arr2, int m){
//     vector<int> arr3(n+m);
//     int i=0, j=0,k=0;
//     while(i<n && j<m){
//         if(arr1[i] < arr2[j]){
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }else{
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n){
//         arr3[k]=arr1[i];
//         k++;
//         i++;
//     }
//     while(j<m){
//         arr3[k]=arr2[j];
//         k++;
//         j++;
//     }
//     return arr3;
// }


vector<int> mergeArrays(vector<int> arr1, int n, vector<int> arr2, int m){
    vector<int> arr3;
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3.push_back(arr1[i++]);
        }else{
            arr3.push_back(arr2[j++]);
        }
    }
    while(i<n){
        arr3.push_back(arr1[i++]);
    }
    while(j<m){
        arr3.push_back(arr2[j++]);
    }
    return arr3;
}

int main(){
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6};
    int n = arr1.size();
    int m = arr2.size();
    cout<<"Array 1 is : "<<endl;
    printArray(arr1);
    cout<<"Array 2 is : "<<endl;
    printArray(arr2);
    vector<int> mergedArray = mergeArrays(arr1,n,arr2,m);
    cout<<"Merged Array is : "<<endl;
    printArray(mergedArray);
}