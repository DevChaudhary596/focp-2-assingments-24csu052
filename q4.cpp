#include <iostream>
using namespace std;

void printSpiral(int n, int matrix[][100]) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    cout << "Spiral Order: ";
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;
        
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;
        
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int matrix[100][100];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    printSpiral(n, matrix);
    return 0;
}

