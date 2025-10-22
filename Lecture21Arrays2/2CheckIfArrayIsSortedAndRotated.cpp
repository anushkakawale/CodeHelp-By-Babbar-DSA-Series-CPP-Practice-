#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,4,5,1,2};
    int count = 0, n = nums.size();
    for(int i=1; i<n; i++){
        if(nums[i] < nums[i-1]){
            count++;
        }
    }
    if(nums[n-1] > nums[0]){
        count++;
    }

    if(count==1){
        cout<<"Array is Sorted and Rotated"<<endl;
    }
    else{
        cout<<"Array is Not Sorted Nor Rotated"<<endl;
    }

    return 0;
}