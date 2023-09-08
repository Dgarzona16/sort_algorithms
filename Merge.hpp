//
// Created by dgarzona on 8/9/2023.
//

#ifndef SORT_MERGE_HPP
#define SORT_MERGE_HPP
namespace merge{
    template <typename T>
    void merge(T* array, int left, int middle, int right, bool (*compare)(T, T)) {
        int leftSize = middle - left + 1;
        int rightSize = right - middle;

        T leftArray[leftSize];
        T rightArray[rightSize];

        for (int i = 0; i < leftSize; i++) {
            leftArray[i] = array[left + i];
        }

        for (int i = 0; i < rightSize; i++) {
            rightArray[i] = array[middle + 1 + i];
        }

        int i = 0;
        int j = 0;
        int k = left;

        while (i < leftSize && j < rightSize) {
            if (compare(leftArray[i], rightArray[j])) {
                array[k] = leftArray[i];
                i++;
            } else {
                array[k] = rightArray[j];
                j++;
            }

            k++;
        }

        while (i < leftSize) {
            array[k] = leftArray[i];
            i++;
            k++;
        }

        while (j < rightSize) {
            array[k] = rightArray[j];
            j++;
            k++;
        }
    }
}
#endif //SORT_MERGE_HPP
