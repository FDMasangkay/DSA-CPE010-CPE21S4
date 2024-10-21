#ifndef SHELLSORT_H
#define SHELLSORT_H

void shellSort(int arr[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int index = gap; index < size; index++) {
            int value = arr[index];
            int position = index;

            while (position >= gap && arr[position - gap] > value) {
                arr[position] = arr[position - gap];
                position -= gap;
            }
            arr[position] = value;
        }
    }
}

#endif
