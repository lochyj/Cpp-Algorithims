#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(int array[], int arrayLength) {

    for (int i = 0; i < arrayLength - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < arrayLength - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << endl;
    }
}

int findMinIndex(const int array[], int start, int arraySize) {
    int min_index = start;

    start++;

    while(start < arraySize) {
        if(array[start] < array[min_index])
            min_index = start;

        start++;
    }

    return min_index;
}

// TODO: Print the array to the console
void selectionSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize; ++i) {
        int min_index = findMinIndex(array, i, arraySize);

        if (i != min_index) {
            swap(array[i], array[min_index]);
        }
    }
}