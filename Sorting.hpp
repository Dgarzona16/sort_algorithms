//
// Created by dgarzona on 8/9/2023.
//
#ifndef SORT_SORTING_HPP
#define SORT_SORTING_HPP

#include "Merge.hpp"

/**
 * Inefficient: O(n^2)
 */
template <typename T>
void selectionSort(T* array, int size, bool (*compare)(T, T)) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (compare(array[j], array[minIndex])) {
                minIndex = j;
            }
        }

        T temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }
}

/**
 * Inefficient: O(n^2)
 */
template <typename T>
void bubbleSort(T* array, int size, bool (*compare)(T, T)) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (compare(array[j + 1], array[j])) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

/**
 * Inefficient: O(n^2)
 */
template <typename T>
void insertionSort(T* array, int size, bool (*compare)(T, T)) {
    for (int i = 1; i < size; i++) {
        T key = array[i];
        int j = i - 1;

        while (j >= 0 && compare(key, array[j])) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}

/**
 * Efficient: O(n log n)
 */
template <typename T>
void mergeSort(T* array, int left, int right, bool (*compare)(T, T)) {
    if (left < right) {
        int middle = (left + right) / 2;

        mergeSort(array, left, middle, compare);
        mergeSort(array, middle + 1, right, compare);

        merge::merge(array, left, middle, right, compare);
    }
}
#endif //SORT_SORTING_HPP
