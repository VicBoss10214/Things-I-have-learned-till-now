#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Convert the number to a string to easily access each digit
    string numberStr = to_string(number);

    // Create a vector to store the digits
    vector<int> digits;

    // Loop through each character in the string and convert it to an integer
    for (char digitChar : numberStr) {
        int digit = digitChar - '0'; // Convert char to int
        digits.push_back(digit);
    }

    // Display the digits
    cout << "Digits in the array are: ";
    for (int digit : digits) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
