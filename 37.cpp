#include <iostream>
#include <vector>

// Function to partition the array and return the pivot index
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low];  // Choose the pivot as the first element
    int i = low;           // Initialize the index of the first element
    int j = high;

    while (i < j) {
        // Find the rightmost element smaller than or equal to the pivot
        while (arr[i] < pivot) {
            i++;
        }

        // Find the leftmost element greater than or equal to the pivot
        while (arr[j] > pivot) {
            j--;
        }

        // If the indices meet or cross, the partitioning is complete
        if (i >= j) {
            break;
        }

        // Swap arr[i] and arr[j]
        std::swap(arr[i], arr[j]);
    }
    
    std::swap(arr[low], arr[j]);  // Place the pivot element in its correct position
    return j;
}

// Function to perform Quick Sort
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Find pivot element such that
        // elements smaller than pivot are on the left
        // and elements greater than pivot are on the right
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after pivot
        quickSort(arr, low, pivotIndex);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();

    std::cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, n - 1);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
