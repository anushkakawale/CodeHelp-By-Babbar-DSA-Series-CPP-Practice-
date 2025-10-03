#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum++;
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int s = 0, sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(arr, n , m , mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int m = 2; //number of students
    int n = 4; //number of books

    int arr[] = {10,20,30,40};  //pages of each book

    int book = allocateBooks(arr,n,m);
    cout<<book<<endl;

    return 0;
}