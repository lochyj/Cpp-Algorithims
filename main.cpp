#include <iostream>
#include <string>
#include <sys\timeb.h>
#include <iosfwd>
#include <fstream>

#include "./sort.h"
#include "./math.h"

using namespace std;

void stringReverse(string String) {
    string newString;
    for (int i = 0; newString.length() < String.length(); i++) {
        newString += String[String.length() - (newString.length() + 1)];
    }
    cout << newString << endl;
}

class Performance {
    private: struct timeb start{};
    private: struct timeb end{};

public:
    void begin() {
        ftime(&start);
    }

    long finish() {
        ftime(&end);
        return int (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));

    }
};

int main() {
    int list[20] = { 1, 2, 5, 4, 7, -2, 3, 4, 11, 67, 10, 5, 35, 8, 7, 78, 3, 6, 56, 7};
    int arrayLength = sizeof(list) / sizeof(int);

    cout << "Bubble sort:" << endl;
    auto *a = new Performance;
    a->begin();
    bubbleSort(list, arrayLength);
    cout << "Finished in: " << a->finish() << "ms" << endl;
    cout << "--" << endl << endl;
    delete a;

    cout << "Selection sort:" << endl;
    auto *b = new Performance;
    b->begin();
    selectionSort(list, arrayLength);
    cout << "Finished in: " << b->finish() << "ms" << endl;
    cout << "--" << endl << endl;
    delete b;

    cout << "Insertion sort:" << endl;
    auto *c = new Performance;
    c->begin();
    insertionSort(list, arrayLength);
    cout << "Finished in: " << c->finish() << "ms" << endl;
    cout << "--" << endl << endl;
    delete c;

    ifstream in("./data.txt", ios_base::in);
    cout <<

    cout << arctan(1, 1);

    return 1;
}


