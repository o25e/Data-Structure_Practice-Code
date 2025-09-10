#include <iostream>
using namespace std;

// Linear search in an array
int main() {
    int arr[5];

    cout << "Input 5 integers >> ";
    // cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int num; // target number
    cout << "Input target number >> ";
    cin >> num;

    int index = 0; // index of the target number

    for (int i = 0; i < 5; i++) {
        if (num == arr[i]) {
            index += i;
            cout << "It is at index " << index << "." << endl;
            return 0;
        }
    }
    cout << "Not found." << endl;

    return 0;
}