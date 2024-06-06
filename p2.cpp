#include <iostream>
using namespace std;

void stars(int N) {
    if (N == 0) 
        return;
    cout << "*";
    stars(N - 1);
}
int main() {
    int N;
    cout << "Enter the number of stars: ";
    cin >> N;
    stars(N);
    cout << endl;
    return 0;
}