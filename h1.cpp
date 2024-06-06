#include <iostream>
#include <algorithm>
using namespace std;

void initializeMatrix(int matrix[][10], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            matrix[i][j] = rand() % 100;
}
void displayMatrix(int matrix[][10], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void maxMinDiagonal(int matrix[][10], int n, int &maxVal, int &minVal) {
    maxVal = matrix[0][0];
    minVal = matrix[0][0];
    for (int i = 0; i < n; ++i) {
        if (matrix[i][i] > maxVal)
            maxVal = matrix[i][i];
        if (matrix[i][i] < minVal)
            minVal = matrix[i][i];
    }
}
void sortRows(int matrix[][10], int n) {
    for (int i = 0; i < n; ++i)
        sort(matrix[i], matrix[i] + n);
}

int main() {
    const int n = 3;
    int matrix[10][10];

    initializeMatrix(matrix, n);

    cout << "Matrix:" << endl;
    displayMatrix(matrix, n);

    int maxVal, minVal;
    maxMinDiagonal(matrix, n, maxVal, minVal);

    cout << "Max on diagonal: " << maxVal << ", Min on diagonal: " << minVal << endl;

    sortRows(matrix, n);

    cout << "Sorted Matrix:" << endl;
    displayMatrix(matrix, n);

    return 0;
}
