#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while (i < n) {
        int j = i + 1;
        while (j < n && chars[i] == chars[j]) {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if (count > 1) {
            string cnt = to_string(count);
            for (char ch : cnt) {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main() {
    string input;
    cout << "Enter characters (without space, e.g., aaabbc): ";
    cin >> input;

    vector<char> chars(input.begin(), input.end());

    int newLength = compress(chars);

    cout << "\nCompressed characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }

    cout << "\nNew length: " << newLength << endl;

    return 0;
}
