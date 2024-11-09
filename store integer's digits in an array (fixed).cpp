#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Convert the number to a string to easily access each digit
    string numberStr = to_string(number);

    // Determine the size of the array
    int size = numberStr.length();
    int digits[size];

    // Store each digit in the array
    for (int i = 0; i < size; ++i) {
        digits[i] = numberStr[i] - '0'; // Convert char to int
    }

    // Display the digits
    cout << "Digits in the array are: ";
    for (int i = 0; i < size; ++i) {
        cout << digits[i] << " ";
    }
    cout << endl;

    return 0;
}
