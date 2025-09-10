#include <iostream>
#include <string>
using namespace std;

// Activity 1: Simple addition of two integers
void activity1(){
    std::cout << "Input 2 integers:";    
    int a, b;    
    std::cin >> a >> b;  // Read two integers
    std::cout << "The sum is: " << a+b << std::endl; // Print their sum
}

// Activity 2: Read a full name and age, then print a message
void activity2(){
    char name[100];  // Array to store the full name
    int age;
    std::cout << "Enter your full name: " << std::endl;
    std::cin.getline(name, 100);  // Read a line (can include spaces)

    std::cout << "Enter your age: ";
    std::cin >> age;  // Read the age
    std::cout << "Hi! " << name 
              << ", Next year you will be " << age + 1 << "." << std::endl;
}

// Activity 3: Linear search in an array
void activity3(){
    std::cout << "Enter number of Integers: ";
    int n;    
    std::cin >> n;  // Read the number of elements

    std::cout << "Put " << n << " integers: ";
    int* arr = new int[n];    
    for (int i = 0; i < n; ++i){
        std::cin >> arr[i];  // Read array elements
    }

    std::cout << "Enter target number:";
    int target;
    std::cin >> target;

    bool found = false;
    for (int i = 0; i < n; ++i){
        if (arr[i] == target){  // If target is found
            std::cout << "It is at index " << i << "." << std::endl;
            found = true;           
            break;  // Stop after the first occurrence
        }
    }
    if (!found){
        std::cout << "Not Found." << std::endl;
    }

    delete[] arr; // Free allocated memory
}

// Activity 4: Reverse an array
void activity4(){
    std::cout << "Enter number of Integers: ";
    int n;    
    std::cin >> n;  // Read the number of elements

    std::cout << "Put " << n << " integers: ";
    int* arr = new int[n];    
    for (int i = 0; i < n; ++i){
        std::cin >> arr[i];  // Read array elements
    }

    std::cout << "You entered: ";
    for (int i = 0; i < n; ++i){
        std::cout << arr[i] << " ";  // Print in normal order
    }

    std::cout << "Reversed: ";
    for (int i = n-1; i >= 0; --i){
        std::cout << arr[i] << " ";  // Print in reverse order
    }

    delete[] arr; // Free allocated memory
}

// Activity 5: Remove duplicates from an array
void activity5(){
    std::cout << "Enter number of Integers: ";
    int n;    
    std::cin >> n;  // Read the number of elements

    std::cout << "Put " << n << " integers: ";
    int* arr = new int[n];    

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read array elements
    }
    
    int* result = new int[n]; // Array to store unique elements      
    int size = 0;             // Size of the result array

    for (int i = 0; i < n; i++) {
        bool exists = false;
        // Check if arr[i] already exists in result[]
        for (int j = 0; j < size; j++) {
            if (arr[i] == result[j]) {
                exists = true;  // Duplicate found
                break;
            }
        }
        if (!exists) {
            result[size++] = arr[i];  // Store only the first occurrence
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";  // Print unique elements
    }
    cout << endl;

    delete[] arr;    // Free memory
    delete[] result; // Free memory
}

int main() {
    // Uncomment one activity at a time to test
    
    // activity1();  // Add two integers
    // activity2();  // Greet user with name and age
    // activity3();  // Search for a target number in the array
    // activity4();  // Reverse an array
    activity5();     // Remove duplicates from an array
}   
