#include <iostream>
using namespace std;

int power(int num, int exponent) {
    if (exponent == 0) return 1;
    return num * power(num, exponent - 1);
}

int main() {
    int num, exponent;
    cout << "Enter base and exponent: ";
    cin >> num >> exponent;
    cout << num << " raised to the power of " << exponent << " is " << power(num, exponent);
    return 0;
}
