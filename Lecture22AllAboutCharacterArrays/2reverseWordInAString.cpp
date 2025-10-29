#include <iostream>
#include <algorithm> 
using namespace std;

string reverseWord(string s, int start, int end) {
    while (start < end) {
        swap(s[start++], s[end--]);
    }
    return s;
}

int main() {
    string s = "My name is Anushka";
    int start = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            s = reverseWord(s, start, i - 1);
            cout<<s<<" ";
            start = i + 1;
        }
    }

    cout << "Reversed words in string are:\n";
    cout << s << endl;

    return 0;
}
