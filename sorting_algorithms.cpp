#include "sorting_algorithms.h"

// Custom swap function
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Helper function to copy an array manually
void copy_array(int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}

SortResult bubble_sort(int arr[], int size) {
    int steps = 0;
    int* sorted_data = new int[size];
    copy_array(arr, sorted_data, size);

    bool swapped;
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            ++steps; // Count comparison
            if (sorted_data[j] > sorted_data[j + 1]) {
                swap(sorted_data[j], sorted_data[j + 1]);
                ++steps; // Count swap
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    return {steps, sorted_data};
}

SortResult selection_sort(int arr[], int size) {
    int steps = 0;
    int* sorted_data = new int[size];
    copy_array(arr, sorted_data, size);

    for (int i = 0; i < size - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < size; ++j) {
            ++steps; // Count comparison
            if (sorted_data[j] < sorted_data[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(sorted_data[i], sorted_data[min_index]);
            ++steps; // Count swap
        }
    }
    return {steps, sorted_data};
}

SortResult insertion_sort(int arr[], int size) {
    int steps = 0;
    int* sorted_data = new int[size];
    copy_array(arr, sorted_data, size);

    for (int i = 1; i < size; ++i) {
        int key = sorted_data[i];
        int j = i - 1;
        while (j >= 0 && sorted_data[j] > key) {
            ++steps; // Count comparison
            sorted_data[j + 1] = sorted_data[j];
            --j;
            ++steps; // Count move
        }
        sorted_data[j + 1] = key;
        ++steps; // Final placement of key
    }
    return {steps, sorted_data};
}
