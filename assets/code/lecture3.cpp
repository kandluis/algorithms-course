#include <stdio.h>
#include <vector>
#include <iostream>

// Merge two sorted arrays to return a sorted array.
std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
    int i = 0; // current index in the left array.
    int j = 0; // curent index in the right array.
    std::vector<int> merged;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            merged.push_back(left[i++]);
        }
        else {
            merged.push_back(right[j++]);
        }
    }
    while (i < left.size()) {
        merged.push_back(left[i++]);
    }
    while (j < right.size()) {
        merged.push_back(right[j++]);
    }
    return merged;
}

// MergeSort algorithm!
std::vector<int> mergeSort(const std::vector<int>& input) {
    const std::size_t n = input.size();
    if (n <= 1) {
        return input;
    }
    const std::vector<int> left = mergeSort({input.begin(), input.begin() + n / 2});
    const std::vector<int> right = mergeSort({input.begin() + n /2, input.end()});
    return merge(left, right);
}

// Given a vector of integers, prints each element out.
// Example: Given {1,2,3}
// Will print: [1, 2, 3] to std::cout.
void printVector(const std::vector<int>& elements) {
    std::cout << "[";
    for (int i = 0; i < elements.size(); i++) {
        const int element = elements[i];
        std::cout << " " << element;
        if (i < elements.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
    return;
}

int main()
{
    // Sanity check mergeSort.
    const std::vector<int> A = {27, 17, 2, 4, 52, 3, 4, 3};
    const std::vector<int> B = mergeSort(A);
    printVector(B);
}