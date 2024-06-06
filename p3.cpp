#include <iostream>
using namespace std;

int sumRange(int a, int b) {
    if (a > b) 
        return 0;
    return a + sumRange(a + 1, b);
}

int main() {
    int a, b;
    cout << "Enter the range a to b: ";
    cin >> a >> b;
    cout << "The sum from " << a << " to " << b << " is " << sumRange(a, b) << endl;
    return 0;
}
