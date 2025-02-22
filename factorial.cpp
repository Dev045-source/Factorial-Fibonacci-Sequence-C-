#include <iostream>

using namespace std;

// Function to calculate the factorial of a number
long long factorial(int n) {
    long long result = 1;

    // Loop to multiply the result by each number from 1 to n
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the factorial function and display the result
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
