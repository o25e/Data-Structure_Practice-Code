#include <iostream>
#include <string>
using namespace std;

// Read a name and age, then print a message
int main() {
    string name;
    cout << "Name?";
    cin >> name;

    int age;
    cout << "Age?";
    cin >> age;
    cout << "Hi! " << name << ". Next year you will be " << age + 1 << "." << endl;

    return 0;
}