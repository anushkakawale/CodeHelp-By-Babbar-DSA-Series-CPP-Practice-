#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> arr) {
    int start = 0, end = arr.size() - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        i--;
        j--;
    }

    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        i--;
    }

    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        j--;
    }

    while (carry != 0) {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    return reverseArray(ans);
}

int main() {
    vector<int> a = {9, 9, 9};
    vector<int> b = {1};
    vector<int> result = findArraySum(a, a.size(), b, b.size());

    for (int x : result) cout << x << " ";
    cout << endl;
}
