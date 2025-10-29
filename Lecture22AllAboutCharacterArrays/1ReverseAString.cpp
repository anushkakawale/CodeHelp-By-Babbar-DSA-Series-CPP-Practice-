#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
        swap(s[start++], s[end--]);
    }
}

int main() {
    vector<char> s = {'B', 'a', 'b', 'b', 'a', 'r'};
    cout << "Original String is : ";
    for (char c : s) cout << c;
    cout << endl;

    reverseString(s);

    cout << "Reversed String is : ";
    for (char c : s) cout << c;
    cout << endl;

    return 0;
}
