#include <iostream>
#include <string>
#include <sys\timeb.h>

using namespace std;

void stringReverse(string String) {
    string newString;
    for (int i = 0; newString.length() < String.length(); i++) {
        newString += String[String.length()-(newString.length()+1)];
    }
    cout << newString << endl;
}

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

void testing () {
    struct timeb start{};
    struct timeb end{};
    int diff;
    ftime(&start);

    for (int i = 0; i < 1001; i++) {
        cout << i;
        if (i == 1000) {
            break;
        }
    }

    ftime(&end);
    diff = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));

    cout << endl << diff << "ms" << endl;
}

int main() {
    int list[20] = {
        1,
        2,
        5,
        4,
        7,
        -2,
        3,
        4,
        11,
        67,
        10,
        5,
        35,
        8,
        7,
        78,
        3,
        6,
        56,
        7
    };
    int listSize = sizeof(list) / sizeof(int);
    bubbleSort(list, listSize);
    stringReverse("Why hello there my friend!");
    testing();
    return 1;
}


