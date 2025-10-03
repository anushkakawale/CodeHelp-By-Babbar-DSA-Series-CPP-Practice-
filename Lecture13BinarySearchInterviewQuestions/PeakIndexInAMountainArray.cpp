#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {0,10,5,2};
    int s = 0, e = arr.size()-1;
    int mid = s + ( e - s ) / 2;
    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + ( e - s ) / 2;
    }
    cout<<"Peek Element is at Position "<<s<<endl;
    return 0;
}