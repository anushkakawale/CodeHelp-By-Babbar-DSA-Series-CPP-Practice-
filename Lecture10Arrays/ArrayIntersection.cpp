//arrays are already sorted

#include <bits/stdc++.h>
using namespace std;

vector<int> arrayIntersection(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            result.push_back(a[i]);
            i++; j++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 5};

    vector<int> inter = arrayIntersection(arr1, arr2);

    for (int x : inter) cout << x << " ";
    return 0;
}
