#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use iterators to traverse the vector
    std::vector<int>::iterator it;

    // Display the elements using iterators
    std::cout << "Using iterators: ";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
