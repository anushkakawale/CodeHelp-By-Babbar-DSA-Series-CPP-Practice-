#include <iostream>
#include <algorithm> 
using namespace std;

char maxOccuringCharacter(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length();i++){
        char ch = s[i];
        int count = 0;
        if(ch >= 'a' && ch <= 'z'){
            count = ch - 'a';
        }
        else{
            count = ch - 'A';
        }
        arr[count]++;
    }
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {
    string s = "test";
    char maxChar = maxOccuringCharacter(s);
    cout<<"Maximum occuring character in string are : "<<maxChar;

    return 0;
}
