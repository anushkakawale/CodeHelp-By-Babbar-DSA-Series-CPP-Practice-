/*
Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now the array is rotated at some pivot point unknown to you.
For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘k’ is present in 'arr'.
Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 'arr'. 
3. 'arr' can be rotated only in the right direction.
Example:
Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2
Output: 3
Explanation:
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
4 3
8 9 4 5
Sample output 1:
-1 
Explanation of Sample Output 1:
For the test case, 3 is not present in the array. Hence the output will be -1.
*/
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int k) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) return mid;
        else if (arr[mid] > k) e = mid - 1;
        else s = mid + 1;
    }
    return -1;
}

int getPivot(vector<int>& arr, int n) {
    int s = 0, e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s; 
}

int search(vector<int>& arr, int n, int k) {
    int pivot = getPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    } 
    else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    vector<int> arr = {12, 15, 18, 2, 4};
    int n = arr.size();
    int k = 2;

    int index = search(arr, n, k);
    if (index != -1) {
        cout << "Element " << k << " found at index " << index << endl;
    } else {
        cout << "Element " << k << " not found" << endl;
    }

    return 0;
}
