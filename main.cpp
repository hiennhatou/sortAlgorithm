#include <iostream>
#include <fstream>
#include "sort/sort.h"
using namespace std;

void showAll(int arr[], int n);

int main() {
    int arr[10000], n;

    ifstream File;
    File.open("../data/array.txt");
    if (!File) {
        File.open("./data/array.txt");
    }

    File >> n;

    for(int i = 0; i < n; i++){
        File >> arr[i];
    }

    File.close();

    /* Uncomment one of specific sorts to use sorts */
//    interchangeSort(arr, n);
//    insertionSort(arr, n);
//    mergeSort(arr, 0, n - 1);
//    selectionSort(arr, n);

    showAll(arr, n);

    return 0;
}

void showAll(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
