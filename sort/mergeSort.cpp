int* assignArr(int source[], int begin, int end) {
    int numberOf = end - begin + 1;
    int* newArr = new int[numberOf];
    int currentPosition = 0;
    while (currentPosition < numberOf) {
        newArr[currentPosition] = source[currentPosition + begin];
        currentPosition++;
    }
    return newArr;
};

void merge(int arr[], int begin, int mid, int end) {
    int numberOfLeft = mid - begin + 1,
            numberOfRight = end - mid;

    int mainPos = begin,
            leftPos = 0,
            rightPos = 0;

    int* left = assignArr(arr, begin, mid);
    int* right = assignArr(arr, mid + 1, end);

    while (leftPos < numberOfLeft && rightPos < numberOfRight) {
        if (*(left + leftPos)  < *(right + rightPos)) {
            arr[mainPos] = *(left + leftPos);
            leftPos++;
        } else {
            arr[mainPos] = *(right + rightPos);
            rightPos++;
        }
        mainPos++;
    }

    while (leftPos < numberOfLeft) {
        arr[mainPos] = *(left + leftPos);
        leftPos++;
        mainPos++;
    }

    while (rightPos < numberOfRight) {
        arr[mainPos] = *(right + rightPos);
        rightPos++;
        mainPos++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int begin, int end) {
    if (begin >= end) return;

    int mid = (begin + end) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
};
