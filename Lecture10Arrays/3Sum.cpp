/*
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.
Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	
	sort(arr.begin(), arr.end());

	for(int i=0; i<n-2; i++){
		if(i>0 && arr[i]==arr[i-1]){
			continue;
		}
		int left = i+1;
		int right = n-1;
		while(left < right){
			int sum = arr[i] + arr[left] + arr[right];
			if(sum == K){
				ans.push_back({arr[i], arr[left], arr[right]});
				while(left < right && arr[left]==arr[left+1]){
					left++;
				}
				while(left < right && arr[right]==arr[right-1]){
					right--;
				}
				left++;
				right--;
			}
			else if(sum < K){
				left++;
			}
			else{
				right--;
			}
		}
	}
	
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

    vector<vector<int>> ans = findTriplets(arr,n,sum);
    
    cout << "Pairs with sum " << sum << " are:\n";
    for(auto &p : ans){
        cout << "(" << p[0] << ", " << p[1] << ", "<<p[2]<<")\n";
    }
    
    return 0;
}