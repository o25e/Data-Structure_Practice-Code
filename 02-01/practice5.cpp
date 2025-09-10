#include <iostream>
using namespace std;

// Remove duplicates from an array
int main() {
    int arr[5];

    cout << "Input 5 integers >> ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int* result =  new int[5]; // 중복 제거된 값을 저장할 배열
    int size = 0;          // result 배열의 실제 크기

    for (int i = 0; i < 5; i++) {
        bool exists = false; // arr[i]가 result에 이미 존재하는지 여부
        for (int j = 0; j < size; j++) {
            if (result[j] == arr[i]) {
                exists = true; // 중복 발견
                break;
            }
        }
        if (!exists) {
            result[size++] = arr[i]; // 중복이 아니면 result에 추가
        }
    }
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " "; // 중복 제거된 배열 출력
    }

    return 0;
}