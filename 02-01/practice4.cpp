#include <iostream>
using namespace std;

// Reverse an array
int main() {
    int arr[5];

    cout << "Input 5 integers >> ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Reverse: ";
    for (int i = 4; i >= 0; i--) { // Print in reverse order
        cout <<  arr[i] << " ";
    }

    return 0;
}