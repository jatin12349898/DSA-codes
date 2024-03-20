#include <iostream>

void deletePrincipalNumbers(int A[], int &n) {
    // Calculate the mean of all numbers in A
    double mean = 0;
    for (int i = 0; i < n; i++) {
        mean += A[i];
    }
    mean /= n;
    
    // Initialize a variable to keep track of the number of principal numbers encountered
    int shift = 0;
    
    // Find principal numbers and remove them from A
    for (int i = 0; i < n; i++) {
        if (A[i] > mean) {
            // Shift elements left to overwrite the principal number
            for (int j = i; j < n - 1; j++) {
                A[j] = A[j + 1];
            }
            n--; // Reduce the size of the array
            i--; // Recheck the current index in case the next element is also a principal number
            shift++;
        }
    }
}

int main() {
    int A[] = {5, 8, 12, 6, 4, 9, 15, 10, 7};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the initial size of the array
    
    std::cout << "Original Array A: ";
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
    
    deletePrincipalNumbers(A, n);
    
    std::cout << "Array A after deleting principal numbers: ";
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
