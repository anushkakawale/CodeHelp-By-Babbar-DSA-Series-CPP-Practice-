#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,4,5,1,2};
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    if(count<=1){
        cout<<"Array is Sorted and Rotated"<<endl;
    }
    else{
        cout<<"Array is Not Sorted Nor Rotated"<<endl;
    }

    return 0;
}