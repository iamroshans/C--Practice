#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp1, temp2, remainder, numDigits, sum;

    cout << "Enter the number up to which you want to get Armstrong values: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        temp1 = i;
        numDigits = 0;
        sum = 0;

        // Calculate the number of digits (numDigits) for the current number
        while (temp1 != 0) {
            temp1 = temp1 / 10;
            ++numDigits;
        }

        // Reset temp1 to the original number (i)
        temp1 = i;

        // Calculate the sum of each digit raised to the power of numDigits
        while (temp1 != 0) {
            remainder = temp1 % 10;
            sum += pow(remainder, numDigits);
            temp1 = temp1 / 10;
        }

        // Debugging output to verify calculations
        cout << "Number: " << i << ", Digits: " << numDigits << ", Sum: " << sum << endl;

        // Check if the sum of the digits raised to the power of numDigits equals the original number
        if (i == sum) {
            cout << i << " is an Armstrong number." << endl;
        }
    }

    return 0;
}
