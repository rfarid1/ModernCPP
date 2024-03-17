// merge-2v.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    // Create two unsorted vectors of strings
    std::vector<std::string> vector1 = { "apple", "banana", "orange", "kiwi" };
    std::vector<std::string> vector2 = { "grape", "kiwi", "melon", "banana" };

    // Merge the vectors and remove duplicates using a set
    std::set<std::string> uniqueSet(vector1.begin(), vector1.end());
    uniqueSet.insert(vector2.begin(), vector2.end());

    // Convert the set back to a vector
    std::vector<std::string> mergedVector(uniqueSet.begin(), uniqueSet.end());

    // Print the merged vector without redundancy
    std::cout << "Merged Vector without Redundancy:" << std::endl;
    for (const auto& element : mergedVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
