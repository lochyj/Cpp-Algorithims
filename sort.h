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

void selectionSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        int e = i;
        int min_index = e;
        e++;
        while(e < arraySize) {
            if (array[e] < array[min_index]) min_index = e;
            e++;
        }
        if (i != min_index) swap(array[i], array[min_index]);
    }
    for (int i = 0; i < arraySize; i++) cout << array[i] << endl;
}

void insertionSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key ) {
            array[j+i] = array[i];
            j--;
        }
        array[j+1] = key;
    }
    for (int i = 0; i < arraySize; i++) cout << array[i] << endl;
}
