//Pivot element -> smallest element from the array of sorted and rotated array
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3,8,10,17,1};
    int n = 5;
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    cout<<"Pivot element is at index : "<<s<<endl;
}