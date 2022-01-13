#include <iostream>
#include <vector>
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

std::vector<int> mysteryAlgorithmOne(const std::vector<int>& elements) {
    std::vector<int> sorted;
    for (const auto& element : elements) {
        for (int i = 0; i < sorted.size() + 1; i++) {
            if (i == sorted.size() || sorted[i] > element) {
                sorted.push_back(0);
                int j = sorted.size() - 1;
                while (j > i) {
                    sorted[j] = sorted[j - 1];
                    j--;
                }
                sorted[i] = element;
                break;
            }
        }
    }
    return sorted;
}

void mysteryAlgorithmTwo(std::vector<int>& elements) {
    for (int i = 0; i < elements.size(); i++) {
        const int current = elements[i];
        int j = i - 1;
        while (j >= 0 and elements[j] > current) {
            elements[j+1] = elements[j];
            j--;
        }
        elements[j+1] = current;
    }  
    return;
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

bool isSorted(const std::vector<int>& input) {
    for (int i = 0; i < input.size() - 1; i++) {
        // Check that the array is equal or increasing at each step.
        if (input[i] > input[i+1]) {
            return false;
        }
    }
    return true;
}

void tryIt() {
    std::vector<int> input = {1,2,3,4,5,6,7,8};
    for (int i = 0; i < 100; i++) {
        // obtain a time-based seed and shuffle.
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::shuffle(input.begin(), input.end(), std::default_random_engine(seed));
        
        // sort it.
        mysteryAlgorithmTwo(input);
        if (isSorted(input)) {
            std::cout << "YES IT IS SORTED" << std::endl;
        }
    }
}


int main()
{
    std::vector<int> elements = {5, 4, 3 ,2, 1};
    std::cout << "We're sorting with mysteryAlgorithmOne:" << std::endl;
    printVector(elements);
    const std::vector<int> firstSort = mysteryAlgorithmOne(elements);
    printVector(firstSort);
    
    std::cout << std::endl << "We're sorting with mysteryAlgorithmTwo" << std::endl;
    printVector(elements);
    mysteryAlgorithmTwo(elements);
    printVector(elements);

    tryIt();
    
    return 0;
}

