// // Question 31 - Implement a set and perform addition/ deletion of elements in it in C++ using standard template libraries (STL).

#include <iostream>
#include <set>

int main() {
    // Create a set
    std::set<int> mySet;

    // Add elements to the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Print the elements of the set
    std::cout << "Elements in set after addition: ";
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Delete an element from the set
    mySet.erase(20);

    // Print the elements of the set after deletion
    std::cout << "Elements in set after deletion: ";
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

// /////////////////////////////////////////////////////

// // Question 32 - Implement a dictionary and display its elements with values in C++ using standard template libraries (STL).

#include <iostream>
#include <map>

int main() {
    // Create a map
    std::map<std::string, int> myMap;

    // Add elements to the map
    myMap["apple"] = 10;
    myMap["banana"] = 20;
    myMap["cherry"] = 30;

    // Print the elements of the map
    std::cout << "Elements in map: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << " => " << pair.second << ", ";
    }
    std::cout << std::endl;

    return 0;
}