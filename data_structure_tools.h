// Author: Abdulrhman Ansary
// Modification date: 5 November 2024

#ifndef DATA_STRUCTURE_TOOLS_H
#define DATA_STRUCTURE_TOOLS_H

#include <iostream>
#include <cstdlib>
#include <vector>

class DataStructureTools
{
  public:
    // For C-style arrays
    void print(int container[], int size)
    {
        std::cout << "{";
        for (int i = 0; i < size; i++)
        {
            std::cout << container[i];
            if (i < size - 1)
                std::cout << ", ";
        }
        std::cout << "}\n";
    }

    // Generic function to print any STL container (vector, list, deque, array, etc.)
    template <typename Container>
    void print(const Container &container)
    {
        std::cout << "{";
        for (auto item = container.begin(); item != container.end(); ++item)
        {
            std::cout << *item;
            if (std::next(item) != container.end())
                std::cout << ", ";
        }
        std::cout << "}\n";
    }

    // Randomly insert elements into a C-style array
    void randomFill(int array[], int size, bool changeSeed = false)
    {
        if (changeSeed)
            srand(static_cast<unsigned int>(time(0)));
        for (int i = 0; i < size; i++)
            array[i] = rand() % size;
    }

    // Randomly insert elements into any STL container
    template <typename Container>
    void randomFill(Container &container, int size, bool changeSeed = false)
    {
        if (container.size() < size)
            container.resize(size);
        if (changeSeed)
            srand(static_cast<unsigned int>(time(0)));
        std::generate(container.begin(), container.end(), [size]() {
            return rand() % size;
        });
    }

    // Check if a C-style array is sorted
    bool isSorted(int arry[], int size, bool ascending = true)
    {
        return std::is_sorted(arry, arry + size, [ascending](int a, int b) {
            return ascending ? a <= b : a >= b;
        });
    }

    // Generic function check if any STL container is sorted (vector, list, deque, array, etc.)
    template <typename Container>
    bool isSorted(const Container &container, bool ascending = true)
    {
        return is_sorted(container.begin(), container.end(), [ascending](int a, int b) {
            return ascending ? a <= b : a >= b;
        });
    }
};
#endif