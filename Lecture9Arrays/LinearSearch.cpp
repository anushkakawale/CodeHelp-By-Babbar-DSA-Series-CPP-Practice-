//Search an element from an array and return index+1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements of an array : \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search : ";
    cin >> key;

    bool found = false;   

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i + 1 << endl; 
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
