#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    // Insert elements at the back
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Insert elements at the front
    myList.push_front(0);

    // Insert an element at a specific position
    std::list<int>::iterator it = myList.begin();
    std::advance(it, 2);  // Move to the 3rd position
    myList.insert(it, 2);

    // Print the linked list
    std::cout << "Linked List: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Remove elements
    myList.pop_front();  // Remove the first element
    myList.pop_back();   // Remove the last element

    // Remove a specific element
    myList.remove(2);

    // Print the modified linked list
    std::cout << "Modified Linked List: ";
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
