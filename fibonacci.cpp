#include <iostream>

using namespace std;

// Function to print the Fibonacci sequence up to the nth number
void fibonacci(int n) {
    // Handle the case for when n is 0
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return;
    }

    // First two Fibonacci numbers
    long long first = 0, second = 1, next;

    cout << "Fibonacci Sequence: ";

    // Handle the case for n = 1
    if (n >= 1) {
        cout << first << " "; // First number of the sequence
    }

    // Generate the Fibonacci sequence
    for (int i = 1; i < n; i++) {
        cout << second << " "; // Print current number in the sequence
        next = first + second; // Calculate the next Fibonacci number
        first = second;        // Update first
        second = next;         // Update second
    }

    cout << endl;
}

int main() {
    int num;

    // Prompt user for input
    cout << "Enter a number to generate Fibonacci sequence: ";
    cin >> num;

    // Call fibonacci function to print the sequence
    fibonacci(num);

    return 0;
}
