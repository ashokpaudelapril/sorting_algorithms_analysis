#include <iostream>
#include <cstdlib> // For rand() and srand()
#include "sorting_algorithms.h"

using namespace std;

// Generates a random array of a given size using rand()
int* generate_random_array(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000; // Random number between 0 and 999
    }
    return arr;
}

void run_tests() {
    srand(12345); // Fixed seed to ensure consistent results
    int kSizes[] = {10,50,100,250, 500, 1000}; // Test sizes
    int num_sizes = 6; // Manually specify the number of elements

    for (int i = 0; i < num_sizes; ++i) {
        int size = kSizes[i];
        int* data = generate_random_array(size);

        // Bubble Sort
        SortResult bubble_result = bubble_sort(data, size);
        cout << "Bubble Sort (Size: " << size << "): " << bubble_result.steps << " steps.\n";
        delete[] bubble_result.sorted_data;

        // Selection Sort
        SortResult selection_result = selection_sort(data, size);
        cout << "Selection Sort (Size: " << size << "): " << selection_result.steps << " steps.\n";
        delete[] selection_result.sorted_data;

        // Insertion Sort
        SortResult insertion_result = insertion_sort(data, size);
        cout << "Insertion Sort (Size: " << size << "): " << insertion_result.steps << " steps.\n";
        delete[] insertion_result.sorted_data;

        delete[] data; // Free original array
    }
}

int main() {
    run_tests();
    return 0;
}
